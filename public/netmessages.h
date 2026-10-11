#ifndef NETMESSAGES_H
#define NETMESSAGES_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "netmessages.pb.h"
#include "networkbasetypes.pb.h"
#include "networksystem_protomessages.pb.h"

class CNETMsg_Tick_t                       : public CNetMessagePBTyped<net_Tick, CNETMsg_Tick, SG_ENGINE, BUF_UNRELIABLE> {};
class CNETMsg_StringCmd_t                  : public CNetMessagePBTyped<net_StringCmd, CNETMsg_StringCmd, SG_STRINGCMD> {};
class CNETMsg_SetConVar_t                  : public CNetMessagePBTyped<net_SetConVar, CNETMsg_SetConVar, SG_STRINGCMD> {};
class CNETMsg_SignonState_t                : public CNetMessagePBTyped<net_SignonState, CNETMsg_SignonState, SG_SIGNON> {};
class CNETMsg_SpawnGroup_Load_t            : public CNetMessagePBTyped<net_SpawnGroup_Load, CNETMsg_SpawnGroup_Load, SG_SPAWNGROUPS> {};
class CNETMsg_SpawnGroup_ManifestUpdate_t  : public CNetMessagePBTyped<net_SpawnGroup_ManifestUpdate, CNETMsg_SpawnGroup_ManifestUpdate, SG_SPAWNGROUPS> {};
class CNETMsg_SpawnGroup_SetCreationTick_t : public CNetMessagePBTyped<net_SpawnGroup_SetCreationTick, CNETMsg_SpawnGroup_SetCreationTick, SG_SPAWNGROUPS> {};
class CNETMsg_SpawnGroup_Unload_t          : public CNetMessagePBTyped<net_SpawnGroup_Unload, CNETMsg_SpawnGroup_Unload, SG_SPAWNGROUPS> {};
class CNETMsg_SpawnGroup_LoadCompleted_t   : public CNetMessagePBTyped<net_SpawnGroup_LoadCompleted, CNETMsg_SpawnGroup_LoadCompleted, SG_SPAWNGROUPS> {};
class CNETMsg_DebugOverlay_t               : public CNetMessagePBTyped<net_DebugOverlay, CNETMsg_DebugOverlay, SG_ENGINE> {};
class CBidirMsg_RebroadcastGameEvent_t     : public CNetMessagePBTyped<bi_RebroadcastGameEvent, CBidirMsg_RebroadcastGameEvent, SG_EVENTS, BUF_RELIABLE, true> {};
class CBidirMsg_RebroadcastSource_t        : public CNetMessagePBTyped<bi_RebroadcastSource, CBidirMsg_RebroadcastSource, SG_EVENTS, BUF_RELIABLE, true> {};
class CBidirMsg_PredictionEvent_t          : public CNetMessagePBTyped<bi_PredictionEvent, CBidirMsg_PredictionEvent, SG_GENERIC, BUF_UNRELIABLE> {};
class CCLCMsg_ClientInfo_t                 : public CNetMessagePBTyped<clc_ClientInfo, CCLCMsg_ClientInfo, SG_SIGNON> {};
class CCLCMsg_Move_t                       : public CNetMessagePBTyped<clc_Move, CCLCMsg_Move, SG_MOVE, BUF_UNRELIABLE> {};
class CCLCMsg_VoiceData_t                  : public CNetMessagePBTyped<clc_VoiceData, CCLCMsg_VoiceData, SG_VOICE, BUF_UNRELIABLE> {};
class CCLCMsg_BaselineAck_t                : public CNetMessagePBTyped<clc_BaselineAck, CCLCMsg_BaselineAck, SG_ENGINE> {};
class CCLCMsg_RespondCvarValue_t           : public CNetMessagePBTyped<clc_RespondCvarValue, CCLCMsg_RespondCvarValue> {};
class CCLCMsg_LoadingProgress_t            : public CNetMessagePBTyped<clc_LoadingProgress, CCLCMsg_LoadingProgress, SG_SIGNON> {};
class CCLCMsg_SplitPlayerConnect_t         : public CNetMessagePBTyped<clc_SplitPlayerConnect, CCLCMsg_SplitPlayerConnect, SG_SIGNON> {};
class CCLCMsg_SplitPlayerDisconnect_t      : public CNetMessagePBTyped<clc_SplitPlayerDisconnect, CCLCMsg_SplitPlayerDisconnect, SG_SIGNON> {};
class CCLCMsg_ServerStatus_t               : public CNetMessagePBTyped<clc_ServerStatus, CCLCMsg_ServerStatus> {};
class CCLCMsg_RequestPause_t               : public CNetMessagePBTyped<clc_RequestPause, CCLCMsg_RequestPause> {};
class CCLCMsg_RconServerDetails_t          : public CNetMessagePBTyped<clc_RconServerDetails, CCLCMsg_RconServerDetails> {};
class CCLCMsg_HltvReplay_t                 : public CNetMessagePBTyped<clc_HltvReplay, CCLCMsg_HltvReplay, SG_HLTVREPLAY> {};
class CCLCMsg_Diagnostic_t                 : public CNetMessagePBTyped<clc_Diagnostic, CCLCMsg_Diagnostic> {};
class CSVCMsg_ServerInfo_t                 : public CNetMessagePBTyped<svc_ServerInfo, CSVCMsg_ServerInfo, SG_SIGNON> {};
class CSVCMsg_ClassInfo_t                  : public CNetMessagePBTyped<svc_ClassInfo, CSVCMsg_ClassInfo, SG_SIGNON> {};
class CSVCMsg_SetPause_t                   : public CNetMessagePBTyped<svc_SetPause, CSVCMsg_SetPause> {};
class CSVCMsg_CreateStringTable_t          : public CNetMessagePBTyped<svc_CreateStringTable, CSVCMsg_CreateStringTable, SG_SIGNON> {};
class CSVCMsg_UpdateStringTable_t          : public CNetMessagePBTyped<svc_UpdateStringTable, CSVCMsg_UpdateStringTable, SG_STRINGTABLE> {};
class CSVCMsg_VoiceInit_t                  : public CNetMessagePBTyped<svc_VoiceInit, CSVCMsg_VoiceInit, SG_SIGNON> {};
class CSVCMsg_VoiceData_t                  : public CNetMessagePBTyped<svc_VoiceData, CSVCMsg_VoiceData, SG_VOICE, BUF_UNRELIABLE> {};
class CSVCMsg_Print_t                      : public CNetMessagePBTyped<svc_Print, CSVCMsg_Print> {};
class CSVCMsg_Sounds_t                     : public CNetMessagePBTyped<svc_Sounds, CSVCMsg_Sounds, SG_SOUNDS> {};
class CSVCMsg_SetView_t                    : public CNetMessagePBTyped<svc_SetView, CSVCMsg_SetView> {};
class CSVCMsg_ClearAllStringTables_t       : public CNetMessagePBTyped<svc_ClearAllStringTables, CSVCMsg_ClearAllStringTables, SG_SIGNON> {};
class CSVCMsg_SplitScreen_t                : public CNetMessagePBTyped<svc_SplitScreen, CSVCMsg_SplitScreen, SG_SIGNON> {};
class CSVCMsg_PacketEntities_t             : public CNetMessagePBTyped<svc_PacketEntities, CSVCMsg_PacketEntities, SG_INVALID> {};
class CSVCMsg_Prefetch_t                   : public CNetMessagePBTyped<svc_Prefetch, CSVCMsg_Prefetch, SG_SOUNDS> {};
class CSVCMsg_Menu_t                       : public CNetMessagePBTyped<svc_Menu, CSVCMsg_Menu> {};
class CSVCMsg_GetCvarValue_t               : public CNetMessagePBTyped<svc_GetCvarValue, CSVCMsg_GetCvarValue> {};
class CSVCMsg_StopSound_t                  : public CNetMessagePBTyped<svc_StopSound, CSVCMsg_StopSound, SG_SOUNDS> {};
class CSVCMsg_PeerList_t                   : public CNetMessagePBTyped<svc_PeerList, CSVCMsg_PeerList> {};
class CSVCMsg_PacketReliable_t             : public CNetMessagePBTyped<svc_PacketReliable, CSVCMsg_PacketReliable> {};
class CSVCMsg_HLTVStatus_t                 : public CNetMessagePBTyped<svc_HLTVStatus, CSVCMsg_HLTVStatus, SG_GENERIC, BUF_RELIABLE, true> {};
class CSVCMsg_ServerSteamID_t              : public CNetMessagePBTyped<svc_ServerSteamID, CSVCMsg_ServerSteamID, SG_GENERIC, BUF_RELIABLE, true> {};
class CSVCMsg_FullFrameSplit_t             : public CNetMessagePBTyped<svc_FullFrameSplit, CSVCMsg_FullFrameSplit> {};
class CSVCMsg_RconServerDetails_t          : public CNetMessagePBTyped<svc_RconServerDetails, CSVCMsg_RconServerDetails> {};
class CSVCMsg_UserMessage_t                : public CNetMessagePBTyped<svc_UserMessage, CSVCMsg_UserMessage, SG_USERMSG> {};
// 74 is svc_Broadcast_Command in netmessages.proto
class CSVCMsg_HltvReplay_t                 : public CNetMessagePBTyped<74, CSVCMsg_HltvReplay, SG_HLTVREPLAY> {};
// 75 is svc_HltvFixupOperatorStatus in netmessages.proto
class CCLCMsg_HltvFixupOperatorTick_t      : public CNetMessagePBTyped<75, CCLCMsg_HltvFixupOperatorTick, SG_HLTVREPLAY> {};
class CSVCMsg_UserCommands_t               : public CNetMessagePBTyped<svc_UserCmds, CSVCMsg_UserCommands, SG_HLTVREPLAY> {};
class CSVCMsg_NextMsgPredicted_t           : public CNetMessagePBTyped<svc_NextMsgPredicted, CSVCMsg_NextMsgPredicted, SG_HLTVREPLAY> {};
class CSVCMsg_EncryptedData_t              : public CNetMessagePBTyped<svc_EncryptedData, CSVCMsg_EncryptedData> {};
// The engine's own ids, not in the proto
class NetMessagePacketStart_t              : public CNetMessagePBTyped<0x40000000, NetMessagePacketStart, SG_SYSTEM> {};
class NetMessagePacketEnd_t                : public CNetMessagePBTyped<0x40000001, NetMessagePacketEnd, SG_SYSTEM> {};
// Ids assigned when the messages are registered
class NetMessageConnectionClosed_t         : public CNetMessagePBTyped<-1, NetMessageConnectionClosed, SG_SYSTEM> {};
class NetMessageConnectionCrashed_t        : public CNetMessagePBTyped<-1, NetMessageConnectionCrashed, SG_SYSTEM> {};
class NetMessageSplitscreenUserChanged_t   : public CNetMessagePBTyped<-1, NetMessageSplitscreenUserChanged, SG_SYSTEM> {};

#endif // NETMESSAGES_H
