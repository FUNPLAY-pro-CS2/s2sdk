#ifndef GAMEEVENTS_H
#define GAMEEVENTS_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "gameevents.pb.h"

class CMsgPlaceDecalEvent_t            : public CNetMessagePBTyped<GE_PlaceDecalEvent, CMsgPlaceDecalEvent, SG_DECALS, BUF_RELIABLE, true> {};
class CMsgClearWorldDecalsEvent_t      : public CNetMessagePBTyped<GE_ClearWorldDecalsEvent, CMsgClearWorldDecalsEvent, SG_DECALS, BUF_RELIABLE, true> {};
class CMsgClearEntityDecalsEvent_t     : public CNetMessagePBTyped<GE_ClearEntityDecalsEvent, CMsgClearEntityDecalsEvent, SG_DECALS, BUF_RELIABLE, true> {};
class CMsgClearDecalsForEntityEvent_t  : public CNetMessagePBTyped<GE_ClearDecalsForEntityEvent, CMsgClearDecalsForEntityEvent, SG_DECALS, BUF_RELIABLE, true> {};
class CMsgSource1LegacyGameEventList_t : public CNetMessagePBTyped<GE_Source1LegacyGameEventList, CMsgSource1LegacyGameEventList, SG_SIGNON, BUF_RELIABLE, true> {};
class CMsgSource1LegacyListenEvents_t  : public CNetMessagePBTyped<GE_Source1LegacyListenEvents, CMsgSource1LegacyListenEvents, SG_SIGNON, BUF_RELIABLE, true> {};
class CMsgSource1LegacyGameEvent_t     : public CNetMessagePBTyped<GE_Source1LegacyGameEvent, CMsgSource1LegacyGameEvent, SG_EVENTS, BUF_RELIABLE, true> {};
class CMsgSosStartSoundEvent_t         : public CNetMessagePBTyped<GE_SosStartSoundEvent, CMsgSosStartSoundEvent, SG_SOUNDS, BUF_RELIABLE, true> {};
class CMsgSosStopSoundEvent_t          : public CNetMessagePBTyped<GE_SosStopSoundEvent, CMsgSosStopSoundEvent, SG_SOUNDS, BUF_RELIABLE, true> {};
class CMsgSosSetSoundEventParams_t     : public CNetMessagePBTyped<GE_SosSetSoundEventParams, CMsgSosSetSoundEventParams, SG_SOUNDS, BUF_RELIABLE, true> {};
class CMsgSosSetLibraryStackFields_t   : public CNetMessagePBTyped<GE_SosSetLibraryStackFields, CMsgSosSetLibraryStackFields, SG_SOUNDS, BUF_RELIABLE, true> {};
class CMsgSosStopSoundEventHash_t      : public CNetMessagePBTyped<GE_SosStopSoundEventHash, CMsgSosStopSoundEventHash, SG_SOUNDS, BUF_RELIABLE, true> {};
class CMsgClothStiffenAnimEvent_t      : public CNetMessagePBTyped<GE_ClothStiffenAnimEvent, CMsgClothStiffenAnimEvent, SG_EVENTS, BUF_RELIABLE, true> {};
class CMsgClothEffectAnimEvent_t       : public CNetMessagePBTyped<GE_ClothEffectAnimEvent, CMsgClothEffectAnimEvent, SG_EVENTS, BUF_RELIABLE, true> {};

#endif // GAMEEVENTS_H
