#include "RankT.h"

RankT ConstructRankT(Any& A, NumericalCounter& N) {
	RankT R;
	R.A = ConstructAny(A);
	R.N = ConstructNumericalCounter(N.N);

	return N;
}

bool Free(RankT& In) {
	Free(In.A);
	Free(In.N);

	return true;
}