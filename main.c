#include <stdio.h>
#include <stdint.h>

#include "Mean.h"
#include "StandardDeviation.h"

static int32_t sample[] = {
	132, 145, 167, 178, 150
};
static uint32_t n = sizeof(sample) / sizeof(sample[0]);


int main(void)
{
	double mean;
	double sd;

	mean = Mean(sample, n);
	printf("mean = %f\n", mean);

	sd = StandardDeviation(sample, n);
	printf("sd = %f\n", sd);

	return 0;
}


