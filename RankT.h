#pragma once
#include <stdio.h>

#include "Any.h"
#include "NumericalCounter.h"

struct RankT {
	NumericalCounter N;
	Any A;
};

RankT ConstructRankT(Any& A, NumericalCounter& N);
bool Free(RankT& In);