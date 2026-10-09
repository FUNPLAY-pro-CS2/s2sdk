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

} // namespace GCSDK

#endif // GCCLIENT_SHAREDOBJECTCACHE_H
