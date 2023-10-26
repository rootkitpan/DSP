#include <math.h>

#include "StandardDeviation.h"

double StandardDeviation(int32_t* array, uint32_t n)
{
	double mean = Mean(array, n);
	double sd = 0;
	uint32_t i;

	for (i = 0; i < n; i++) {
		sd = (mean - array[i]) * (mean - array[i]);
	}

	sd = sd / (n - 1);

	sd = sqrt(sd);

	return sd;
}
