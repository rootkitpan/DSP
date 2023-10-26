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

static uint32_t Old_N;
static uint32_t Old_SumOfSquare;
static double Old_Mean;

void StartCalculateSD(void)
{
	_N = 0;
	_SumOfSquare = 0;
	_Mean = 0;
}

void AddOneSample(int32_t sample)
{
	
}

double GetSD()
{

}

/*
  n --> n+1

  u(n)
  u(n+1) = [ u(n) * n + an+1 ] / (n+1);
 
  X(n) = (a1 - u)2 + (a2 - u)2 + ... + (an - u)2
       = (a1)2 + (a2)2 + ... (an)2 + nu2 - 2(a1+a2+...+an)u
	   = (a1)2 + (a2)2 + ... (an)2 - nu2
	   = sum of square - sum2 / n
 
  X(n+1) = (a1)2 + (a2)2 + ... (an)2 + (an+1)2 
            - (n+1)[(nu + an+1)/(n+1)]2
	    = (a1)2 + (a2)2 + ... (an)2 + (an+1)2 -
		   (nu + an+1)2 / (n+1)
 
 */
