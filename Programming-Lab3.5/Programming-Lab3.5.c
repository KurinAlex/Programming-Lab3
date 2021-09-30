#include <stdio.h>
#include <math.h>

#define EPS1 0.001
#define EPS2 0.0001

float OutputS(float x, float eps)
{
	float s = 1;
	float add = 1;
	int n = 1;

	while (fabs(add) > eps)
	{
		add *= (3.0 / (4.0 * n) - 1.0) * x;
		s += add;
		n++;
	}

	printf("s = %f n = %d eps = %f\n", s, n, eps);
}

int main()
{
	float x;

	printf("Enter x:\n");
	scanf_s("%f", &x);

	if (fabs(x) < 1.0)
	{
		OutputS(x, EPS1);
		OutputS(x, EPS2);
	}
	else
	{
		printf("x must be in range (-1,1)\n");
	}

	getch();
}