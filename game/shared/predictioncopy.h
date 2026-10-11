#ifndef PREDICTIONCOPY_H
#define PREDICTIONCOPY_H

#ifdef _WIN32
#pragma once
#endif

enum PredictionCopyType_t
{
	PC_NON_NETWORKED_ONLY = 0,
	PC_NETWORKED_ONLY,

	PC_COPYTYPE_COUNT,
	PC_EVERYTHING = PC_COPYTYPE_COUNT,
};

#endif // PREDICTIONCOPY_H
