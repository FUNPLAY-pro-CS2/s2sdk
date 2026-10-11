#ifndef CS_GAMEEVENTS_H
#define CS_GAMEEVENTS_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "cs_gameevents.pb.h"

class CMsgTEFireBullets_t   : public CNetMessagePBTyped<GE_FireBulletsId, CMsgTEFireBullets, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgPlayerBulletHit_t : public CNetMessagePBTyped<GE_PlayerBulletHitId, CMsgPlayerBulletHit, SG_EVENTS, BUF_UNRELIABLE, true> {};

#endif // CS_GAMEEVENTS_H
