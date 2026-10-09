//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: Base class for objects that are kept in synch between client and server
//
//=============================================================================

#ifndef SHAREDOBJECTCACHE_H
#define SHAREDOBJECTCACHE_H

#ifdef _WIN32
#pragma once
#endif

#include "gcsdk/sharedobject.h"

namespace GCSDK
{

//----------------------------------------------------------------------------
// Purpose: The part of a shared object cache that handles all objects of a
//			single type.
//----------------------------------------------------------------------------
class CSharedObjectTypeCache
{
public:
	virtual ~CSharedObjectTypeCache();

	int GetTypeID() const { return m_nTypeID; }
	uint32 GetCount() const { return m_vecObjects.Count(); }
	CSharedObject *GetObject( uint32 nObj ) { return m_vecObjects[nObj]; }
	const CSharedObject *GetObject( uint32 nObj ) const { return m_vecObjects[nObj]; }

	virtual bool AddObject( CSharedObject *pObject );
	virtual bool AddObjectClean( CSharedObject *pObject );
	virtual CSharedObject *RemoveObject( const CSharedObject &soIndex );
	virtual void RemoveAllObjectsWithoutDeleting();
	virtual void EnsureCapacity( uint32 nItems );
	virtual void Dump() const;

private:
	CSharedObjectVec m_vecObjects;
	// AMNOTE: Hash map of the key lookup tables CSharedObject::FindKeyIndex searches
	uint8 m_KeyIndices[80];
	int m_nTypeID;
};

} // namespace GCSDK

#endif // SHAREDOBJECTCACHE_H
