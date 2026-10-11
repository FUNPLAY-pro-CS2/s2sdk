#ifndef SCHEMA_H
#define SCHEMA_H

#ifdef _WIN32
#pragma once
#endif

#include "schemalib/schemametadata_data.h"

struct SchemaAtomicTypeInfo_t
{
	const char* m_pszName;
	const char* m_pszTokenName;
	
	int m_nAtomicID;
	
	int m_nStaticMetadataCount;
	SchemaMetadataEntryData_t* m_pStaticMetadata;
};

#endif // SCHEMA_H
