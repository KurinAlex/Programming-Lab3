#include <stdio.h>
#include <math.h>

#define EPS1 0.001
#define EPS2 0.0001

void OutputS(double x, double eps)
{
	double s = 1;
	double add = 1;
	int n = 1;

	while (fabs(add) > eps)
	{
		add *= (3.0 / (4.0 * n) - 1.0) * x;
		s += add;
		n++;
	}

	printf("s = %lf n = %d eps = %lf\n", s, n, eps);
}

int main()
{
	double x;

	printf("Enter x:\n");
	scanf_s("%lf", &x);

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