#ifndef USERMESSAGES_H
#define USERMESSAGES_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "usermessages.pb.h"

class CUserMessageAchievementEvent_t         : public CNetMessagePBTyped<UM_AchievementEvent, CUserMessageAchievementEvent, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageCurrentTimescale_t         : public CNetMessagePBTyped<UM_CurrentTimescale, CUserMessageCurrentTimescale, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageDesiredTimescale_t         : public CNetMessagePBTyped<UM_DesiredTimescale, CUserMessageDesiredTimescale, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageFade_t                     : public CNetMessagePBTyped<UM_Fade, CUserMessageFade, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageHudMsg_t                   : public CNetMessagePBTyped<UM_HudMsg, CUserMessageHudMsg, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageHudText_t                  : public CNetMessagePBTyped<UM_HudText, CUserMessageHudText, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageColoredText_t              : public CNetMessagePBTyped<UM_ColoredText, CUserMessageColoredText, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRequestState_t             : public CNetMessagePBTyped<UM_RequestState, CUserMessageRequestState, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageResetHUD_t                 : public CNetMessagePBTyped<UM_ResetHUD, CUserMessageResetHUD, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRumble_t                   : public CNetMessagePBTyped<UM_Rumble, CUserMessageRumble, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageSayText_t                  : public CNetMessagePBTyped<UM_SayText, CUserMessageSayText, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageSayText2_t                 : public CNetMessagePBTyped<UM_SayText2, CUserMessageSayText2, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageSayTextChannel_t           : public CNetMessagePBTyped<UM_SayTextChannel, CUserMessageSayTextChannel, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageShake_t                    : public CNetMessagePBTyped<UM_Shake, CUserMessageShake, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageShakeDir_t                 : public CNetMessagePBTyped<UM_ShakeDir, CUserMessageShakeDir, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageWaterShake_t               : public CNetMessagePBTyped<UM_WaterShake, CUserMessageWaterShake, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageTextMsg_t                  : public CNetMessagePBTyped<UM_TextMsg, CUserMessageTextMsg, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageScreenTilt_t               : public CNetMessagePBTyped<UM_ScreenTilt, CUserMessageScreenTilt, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageVoiceMask_t                : public CNetMessagePBTyped<UM_VoiceMask, CUserMessageVoiceMask, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageSendAudio_t                : public CNetMessagePBTyped<UM_SendAudio, CUserMessageSendAudio, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageItemPickup_t               : public CNetMessagePBTyped<UM_ItemPickup, CUserMessageItemPickup, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageAmmoDenied_t               : public CNetMessagePBTyped<UM_AmmoDenied, CUserMessageAmmoDenied, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageShowMenu_t                 : public CNetMessagePBTyped<UM_ShowMenu, CUserMessageShowMenu, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageCreditsMsg_t               : public CNetMessagePBTyped<UM_CreditsMsg, CUserMessageCreditsMsg, SG_USERMSG, BUF_RELIABLE, true> {};
class CEntityMessageScreenOverlay_t          : public CNetMessagePBTyped<EM_ScreenOverlay, CEntityMessageScreenOverlay, SG_USERMSG, BUF_RELIABLE, true> {};
class CEntityMessagePropagateForce_t         : public CNetMessagePBTyped<EM_PropagateForce, CEntityMessagePropagateForce, SG_USERMSG, BUF_RELIABLE, true> {};
class CEntityMessageDoSpark_t                : public CNetMessagePBTyped<EM_DoSpark, CEntityMessageDoSpark, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageCloseCaptionPlaceholder_t  : public CNetMessagePBTyped<UM_CloseCaptionPlaceholder, CUserMessageCloseCaptionPlaceholder, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageCameraTransition_t         : public CNetMessagePBTyped<UM_CameraTransition, CUserMessageCameraTransition, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageAudioParameter_t           : public CNetMessagePBTyped<UM_AudioParameter, CUserMessageAudioParameter, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMsg_ParticleManager_t             : public CNetMessagePBTyped<UM_ParticleManager, CUserMsg_ParticleManager, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMsg_HudError_t                    : public CNetMessagePBTyped<UM_HudError, CUserMsg_HudError, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageHapticsManagerPulse_t      : public CNetMessagePBTyped<UM_HapticsManagerPulse, CUserMessageHapticsManagerPulse, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageHapticsManagerEffect_t     : public CNetMessagePBTyped<UM_HapticsManagerEffect, CUserMessageHapticsManagerEffect, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageUpdateCssClasses_t         : public CNetMessagePBTyped<UM_UpdateCssClasses, CUserMessageUpdateCssClasses, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageServerFrameTime_t          : public CNetMessagePBTyped<UM_ServerFrameTime, CUserMessageServerFrameTime, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageLagCompensationError_t     : public CNetMessagePBTyped<UM_LagCompensationError, CUserMessageLagCompensationError, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRequestDllStatus_t         : public CNetMessagePBTyped<UM_RequestDllStatus, CUserMessageRequestDllStatus, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRequestUtilAction_t        : public CNetMessagePBTyped<UM_RequestUtilAction, CUserMessageRequestUtilAction, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRequestInventory_t         : public CNetMessagePBTyped<UM_RequestInventory, CUserMessageRequestInventory, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRequestDiagnostic_t        : public CNetMessagePBTyped<UM_RequestDiagnostic, CUserMessageRequestDiagnostic, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessage_NotifyResponseFound_t     : public CNetMessagePBTyped<UM_NotifyResponseFound, CUserMessage_NotifyResponseFound, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessage_PlayResponseConditional_t : public CNetMessagePBTyped<UM_PlayResponseConditional, CUserMessage_PlayResponseConditional, SG_USERMSG, BUF_RELIABLE, true> {};
class CUserMessageRemoteServerResponse_t     : public CNetMessagePBTyped<UM_RemoteServerResponse, CUserMessageRemoteServerResponse, SG_USERMSG, BUF_RELIABLE, true> {};

#endif // USERMESSAGES_H
