# Configures both build systems in the current folder, from the same options:
# AMBuild here (then run `ambuild`), CMake in cmake/ (then run `cmake --build cmake`).
# --no-cmake skips the CMake one, e.g. without CMake installed.
import os
import shutil
import subprocess
import sys
from ambuild2 import run

parser = run.BuildParser(sourcePath = sys.path[0], api='2.2')
parser.options.add_argument('--enable-debug', action='store_const', const='1', dest='debug',
                        help='Enable debugging symbols')
parser.options.add_argument('--enable-optimize', action='store_const', const='1', dest='opt',
                        help='Enable optimization')
parser.options.add_argument('--targets', type=str, dest='targets', default=None,
                        help="Override the target architecture (use commas to separate multiple targets).")
parser.options.add_argument('--s2sdk-manifests', type=str, dest='s2sdk_manifests', default=None,
                        help='Path to s2sdk-manifests, to check the SDK the way plugins build against it')
parser.options.add_argument('--hl2sdk-manifests', type=str, dest='hl2sdk_manifests', default=None,
                        help='Path to hl2sdk-manifests, the same for projects that still use it')
parser.options.add_argument('--sdk', type=str, dest='sdk', default='cs2',
                        help='The manifest name of this branch\'s game')
parser.options.add_argument('--no-cmake', action='store_true', dest='no_cmake', default=False,
                        help='Only configure AMBuild')
options, _ = parser.options.parse_known_args()

parser.Configure()

if options.no_cmake:
  sys.exit(0)

cmake = shutil.which('cmake')
if not cmake:
  print('CMake was not found, only AMBuild is configured (pass --no-cmake to skip this)')
  sys.exit(0)

# The same build with CMake: the libraries, and the checks when there are
# manifests to check against
args = [
  cmake, '-S', sys.path[0], '-B', os.path.join(os.getcwd(), 'cmake'),
  '-DCMAKE_BUILD_TYPE={}'.format('Debug' if options.debug == '1' else 'Release'),
]
if options.s2sdk_manifests:
  args += ['-DS2SDK_MANIFESTS_DIR={}'.format(os.path.abspath(options.s2sdk_manifests))]
if options.s2sdk_manifests or options.hl2sdk_manifests:
  args += ['-DS2SDK_BUILD_TESTS=ON']
if shutil.which('ninja'):
  args += ['-G', 'Ninja']

sys.exit(subprocess.call(args))
