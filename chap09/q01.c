#include <stdio.h>

double min(double, double);

int main(void)
{
	double x, y;
	x = 15, y = 11;

	printf("%f", min(x, y));

	return 0;
}

double min(double x, double y)
{	
	return x > y ? y : x;
}


