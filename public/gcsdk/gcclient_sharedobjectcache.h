//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: Additional shared object cache functionality for the GC
//
//=============================================================================

#ifndef GCCLIENT_SHAREDOBJECTCACHE_H
#define GCCLIENT_SHAREDOBJECTCACHE_H

#ifdef _WIN32
#pragma once
#endif

#include "gcsdk/sharedobjectcache.h"

namespace GCSDK
{

class CGCClientSharedObjectCache;

/// Enumerate different events that might trigger a callback to an ISharedObjectListener
enum ESOCacheEvent
{
	/// Dummy sentinel value
	eSOCacheEvent_None = 0,

	/// We received a our first update from the GC and are subscribed
	eSOCacheEvent_Subscribed = 1,

	/// We lost connection to GC or GC notified us that we are no longer subscribed.
	/// Objects stay in the cache, but we no longer receive updates
	eSOCacheEvent_Unsubscribed = 2,

	/// We received a full update from the GC on a cache for which we were already subscribed.
	/// This can happen if connectivity is lost, and then restored before we realized it was lost.
	eSOCacheEvent_Resubscribed = 3,

	/// We received an incremental update from the GC about specific object(s) being
	/// added, updated, or removed from the cache
	eSOCacheEvent_Incremental = 4,

	/// A lister was added to the cache
	eSOCacheEvent_ListenerAdded = 5,

	/// A lister was removed from the cache
	eSOCacheEvent_ListenerRemoved = 6,
};

//----------------------------------------------------------------------------
// Purpose: Allow game components to register themselves to hear about inventory
//			changes when they are received from the server
//----------------------------------------------------------------------------
abstract_class ISharedObjectListener
{
public:
	/// Called when a new object is created in a cache we are currently subscribed to, or when we are added
	/// as a listener to a cache which already has objects in it
	virtual void SOCreated( SOID_t owner, const CSharedObject *pObject, ESOCacheEvent eEvent ) = 0;

	/// Called when an object is updated in a cache we are currently subscribed to.
	virtual void SOUpdated( SOID_t owner, const CSharedObject *pObject, ESOCacheEvent eEvent ) = 0;

	/// Called when an object is about to be deleted in a cache we are currently subscribed to.
	/// The object will have already been removed from the cache, but is still valid.
	virtual void SODestroyed( SOID_t owner, const CSharedObject *pObject, ESOCacheEvent eEvent ) = 0;

	/// Called to notify a listener that he is subscribed to the cache.
	virtual void SOCacheSubscribed( SOID_t owner, CGCClientSharedObjectCache *pSOC, ESOCacheEvent eEvent ) = 0;

	/// Called to notify a listener that he is no longer subscribed to the cache.
	virtual void SOCacheUnsubscribed( SOID_t owner, CGCClientSharedObjectCache *pSOC, ESOCacheEvent eEvent ) = 0;
};

//----------------------------------------------------------------------------
// Purpose: The part of a shared object cache that handles all objects of a
//			single type.
//----------------------------------------------------------------------------
class CGCClientSharedObjectTypeCache : public CSharedObjectTypeCache
{
public:
	virtual ~CGCClientSharedObjectTypeCache();

private:
	// AMNOTE: Set to 0 by AllocateTypeCache
	int m_unk001;
};

} // namespace GCSDK

#endif // GCCLIENT_SHAREDOBJECTCACHE_H
