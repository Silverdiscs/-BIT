#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
double getValue()
{
	double S = 0;
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2)
		{
			S += 1 / i;	//when i is odd number
		}
		else
		{
			S -= 1 / i;	//when i is even number
		}
	}
	return S;
}
int main()
{
	printf("%lf\n", getValue());
	return 0;
}