#ifndef CSTRIKE15_USERMESSAGES_H
#define CSTRIKE15_USERMESSAGES_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "cstrike15_usermessages.pb.h"

class CCSUsrMsg_VGUIMenu_t                     : public CNetMessagePBTyped<CS_UM_VGUIMenu, CCSUsrMsg_VGUIMenu, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SendAudio_t                    : public CNetMessagePBTyped<CS_UM_SendAudio, CCSUsrMsg_SendAudio, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_RawAudio_t                     : public CNetMessagePBTyped<CS_UM_RawAudio, CCSUsrMsg_RawAudio, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_Damage_t                       : public CNetMessagePBTyped<CS_UM_Damage, CCSUsrMsg_Damage, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_RadioText_t                    : public CNetMessagePBTyped<CS_UM_RadioText, CCSUsrMsg_RadioText, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_HintText_t                     : public CNetMessagePBTyped<CS_UM_HintText, CCSUsrMsg_HintText, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_KeyHintText_t                  : public CNetMessagePBTyped<CS_UM_KeyHintText, CCSUsrMsg_KeyHintText, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_ProcessSpottedEntityUpdate_t   : public CNetMessagePBTyped<CS_UM_ProcessSpottedEntityUpdate, CCSUsrMsg_ProcessSpottedEntityUpdate, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_AdjustMoney_t                  : public CNetMessagePBTyped<CS_UM_AdjustMoney, CCSUsrMsg_AdjustMoney, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_KillCam_t                      : public CNetMessagePBTyped<CS_UM_KillCam, CCSUsrMsg_KillCam, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_MatchEndConditions_t           : public CNetMessagePBTyped<CS_UM_MatchEndConditions, CCSUsrMsg_MatchEndConditions, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_PlayerStatsUpdate_t            : public CNetMessagePBTyped<CS_UM_PlayerStatsUpdate, CCSUsrMsg_PlayerStatsUpdate, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_CallVoteFailed_t               : public CNetMessagePBTyped<CS_UM_CallVoteFailed, CCSUsrMsg_CallVoteFailed, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_VoteStart_t                    : public CNetMessagePBTyped<CS_UM_VoteStart, CCSUsrMsg_VoteStart, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_VotePass_t                     : public CNetMessagePBTyped<CS_UM_VotePass, CCSUsrMsg_VotePass, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_VoteFailed_t                   : public CNetMessagePBTyped<CS_UM_VoteFailed, CCSUsrMsg_VoteFailed, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_VoteSetup_t                    : public CNetMessagePBTyped<CS_UM_VoteSetup, CCSUsrMsg_VoteSetup, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_ServerRankRevealAll_t          : public CNetMessagePBTyped<CS_UM_ServerRankRevealAll, CCSUsrMsg_ServerRankRevealAll, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SendLastKillerDamageToClient_t : public CNetMessagePBTyped<CS_UM_SendLastKillerDamageToClient, CCSUsrMsg_SendLastKillerDamageToClient, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_ServerRankUpdate_t             : public CNetMessagePBTyped<CS_UM_ServerRankUpdate, CCSUsrMsg_ServerRankUpdate, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SendPlayerItemDrops_t          : public CNetMessagePBTyped<CS_UM_SendPlayerItemDrops, CCSUsrMsg_SendPlayerItemDrops, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_RoundBackupFilenames_t         : public CNetMessagePBTyped<CS_UM_RoundBackupFilenames, CCSUsrMsg_RoundBackupFilenames, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SendPlayerItemFound_t          : public CNetMessagePBTyped<CS_UM_SendPlayerItemFound, CCSUsrMsg_SendPlayerItemFound, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_ReportHit_t                    : public CNetMessagePBTyped<CS_UM_ReportHit, CCSUsrMsg_ReportHit, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_XpUpdate_t                     : public CNetMessagePBTyped<CS_UM_XpUpdate, CCSUsrMsg_XpUpdate, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_QuestProgress_t                : public CNetMessagePBTyped<CS_UM_QuestProgress, CCSUsrMsg_QuestProgress, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_ScoreLeaderboardData_t         : public CNetMessagePBTyped<CS_UM_ScoreLeaderboardData, CCSUsrMsg_ScoreLeaderboardData, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_PlayerDecalDigitalSignature_t  : public CNetMessagePBTyped<CS_UM_PlayerDecalDigitalSignature, CCSUsrMsg_PlayerDecalDigitalSignature, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_WeaponSound_t                  : public CNetMessagePBTyped<CS_UM_WeaponSound, CCSUsrMsg_WeaponSound, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_UpdateScreenHealthBar_t        : public CNetMessagePBTyped<CS_UM_UpdateScreenHealthBar, CCSUsrMsg_UpdateScreenHealthBar, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_EntityOutlineHighlight_t       : public CNetMessagePBTyped<CS_UM_EntityOutlineHighlight, CCSUsrMsg_EntityOutlineHighlight, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SSUI_t                         : public CNetMessagePBTyped<CS_UM_SSUI, CCSUsrMsg_SSUI, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SurvivalStats_t                : public CNetMessagePBTyped<CS_UM_SurvivalStats, CCSUsrMsg_SurvivalStats, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_DisconnectToLobby_t            : public CNetMessagePBTyped<CS_UM_DisconnectToLobby2, CCSUsrMsg_DisconnectToLobby, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_EndOfMatchAllPlayersData_t     : public CNetMessagePBTyped<CS_UM_EndOfMatchAllPlayersData, CCSUsrMsg_EndOfMatchAllPlayersData, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_PostRoundDamageReport_t        : public CNetMessagePBTyped<CS_UM_PostRoundDamageReport, CCSUsrMsg_PostRoundDamageReport, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_RoundEndReportData_t           : public CNetMessagePBTyped<CS_UM_RoundEndReportData, CCSUsrMsg_RoundEndReportData, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_CurrentRoundOdds_t             : public CNetMessagePBTyped<CS_UM_CurrentRoundOdds, CCSUsrMsg_CurrentRoundOdds, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_DeepStats_t                    : public CNetMessagePBTyped<CS_UM_DeepStats, CCSUsrMsg_DeepStats, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_ShootInfo_t                    : public CNetMessagePBTyped<CS_UM_ShootInfo, CCSUsrMsg_ShootInfo, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_CounterStrafe_t                : public CNetMessagePBTyped<CS_UM_CounterStrafe, CCSUsrMsg_CounterStrafe, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_RecurringMissionSchema_t       : public CNetMessagePBTyped<CS_UM_RecurringMissionSchema, CCSUsrMsg_RecurringMissionSchema, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_SendPlayerLoadout_t            : public CNetMessagePBTyped<CS_UM_SendPlayerLoadout, CCSUsrMsg_SendPlayerLoadout, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_WeaponMagDrop_t                : public CNetMessagePBTyped<CS_UM_WeaponMagDrop, CCSUsrMsg_WeaponMagDrop, SG_USERMSG, BUF_RELIABLE, true> {};
class CCSUsrMsg_CustomHudClicked_t             : public CNetMessagePBTyped<CS_UM_CustomHudClicked, CCSUsrMsg_CustomHudClicked, SG_USERMSG, BUF_RELIABLE, true> {};

#endif // CSTRIKE15_USERMESSAGES_H
