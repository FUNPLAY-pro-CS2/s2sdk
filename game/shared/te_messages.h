#ifndef TE_MESSAGES_H
#define TE_MESSAGES_H

#ifdef _WIN32
#pragma once
#endif

#include <networksystem/inetworkmessages.h>

#include "te.pb.h"

class CMsgTEEffectDispatch_t : public CNetMessagePBTyped<TE_EffectDispatchId, CMsgTEEffectDispatch, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEArmorRicochet_t  : public CNetMessagePBTyped<TE_ArmorRicochetId, CMsgTEArmorRicochet, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBeamEntPoint_t   : public CNetMessagePBTyped<TE_BeamEntPointId, CMsgTEBeamEntPoint, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBeamEnts_t       : public CNetMessagePBTyped<TE_BeamEntsId, CMsgTEBeamEnts, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBeamPoints_t     : public CNetMessagePBTyped<TE_BeamPointsId, CMsgTEBeamPoints, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBeamRing_t       : public CNetMessagePBTyped<TE_BeamRingId, CMsgTEBeamRing, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBubbles_t        : public CNetMessagePBTyped<TE_BubblesId, CMsgTEBubbles, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBubbleTrail_t    : public CNetMessagePBTyped<TE_BubbleTrailId, CMsgTEBubbleTrail, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEDecal_t          : public CNetMessagePBTyped<TE_DecalId, CMsgTEDecal, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEWorldDecal_t     : public CNetMessagePBTyped<TE_WorldDecalId, CMsgTEWorldDecal, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEEnergySplash_t   : public CNetMessagePBTyped<TE_EnergySplashId, CMsgTEEnergySplash, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEFizz_t           : public CNetMessagePBTyped<TE_FizzId, CMsgTEFizz, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEGlowSprite_t     : public CNetMessagePBTyped<TE_GlowSpriteId, CMsgTEGlowSprite, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEImpact_t         : public CNetMessagePBTyped<TE_ImpactId, CMsgTEImpact, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEMuzzleFlash_t    : public CNetMessagePBTyped<TE_MuzzleFlashId, CMsgTEMuzzleFlash, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEBloodStream_t    : public CNetMessagePBTyped<TE_BloodStreamId, CMsgTEBloodStream, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEExplosion_t      : public CNetMessagePBTyped<TE_ExplosionId, CMsgTEExplosion, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEDust_t           : public CNetMessagePBTyped<TE_DustId, CMsgTEDust, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTELargeFunnel_t    : public CNetMessagePBTyped<TE_LargeFunnelId, CMsgTELargeFunnel, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTESparks_t         : public CNetMessagePBTyped<TE_SparksId, CMsgTESparks, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTEPhysicsProp_t    : public CNetMessagePBTyped<TE_PhysicsPropId, CMsgTEPhysicsProp, SG_EVENTS, BUF_UNRELIABLE, true> {};
class CMsgTESmoke_t          : public CNetMessagePBTyped<TE_SmokeId, CMsgTESmoke, SG_EVENTS, BUF_UNRELIABLE, true> {};

#endif // TE_MESSAGES_H
