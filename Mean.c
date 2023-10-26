#include "Mean.h"


double Mean(int32_t* array, uint32_t n)
{
	double sum = 0;
	uint32_t i;

	for (i = 0; i < n; i++) {
		sum += array[i];
	}

	return (sum / n);
}



