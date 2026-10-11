#include "netmessages.h"
#include "usermessages.h"
#include "gameevents.h"
#include "te_messages.h"
#include "clientmessages.h"
#include "cstrike15/cstrike15_usermessages.h"
#include "cs/cs_gameevents.h"

// A few of the values the engine and the server instantiate their CNetMessagePB with, from their RTTI
static_assert( SG_DECALS == 12 && SG_USERMSG == 13 && SG_HLTVREPLAY == 17 && SG_TOTAL == 18 );
static_assert( CNETMsg_Tick_t::kMessageId == 4 && CNETMsg_Tick_t::kSignonGroup == SG_ENGINE && CNETMsg_Tick_t::kBufType == BUF_UNRELIABLE );
static_assert( CCLCMsg_Move_t::kMessageId == 21 && CCLCMsg_Move_t::kSignonGroup == SG_MOVE );
static_assert( CSVCMsg_HltvReplay_t::kMessageId == 74 && CSVCMsg_UserCommands_t::kMessageId == 76 );
static_assert( NetMessagePacketStart_t::kMessageId == 0x40000000 );
static_assert( CUserMessageTextMsg_t::kSignonGroup == SG_USERMSG && CUserMessageTextMsg_t::kOkToRedispatch );
static_assert( CMsgPlaceDecalEvent_t::kSignonGroup == SG_DECALS );
static_assert( CMsgTEEffectDispatch_t::kBufType == BUF_UNRELIABLE );

// No members of their own, so they describe the same objects as the stub
static_assert( sizeof( CCLCMsg_Move_t ) == sizeof( CNetMessagePB<CCLCMsg_Move> ) );
static_assert( sizeof( CCSUsrMsg_VGUIMenu_t ) == sizeof( CNetMessagePB<CCSUsrMsg_VGUIMenu> ) );
