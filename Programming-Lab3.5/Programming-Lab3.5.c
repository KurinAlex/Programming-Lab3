#include <stdio.h>
#include <math.h>

EnterDouble(double* num, const char* number_name)
{
	printf("Enter %s:", number_name);
	scanf_s("%lf", num);
}

int main()
{
	double x;
	printf("x must be in range (-1,1)\n");
	do
	{
		EnterDouble(&x, "x");
	} while (fabs(x) >= 1);

	double eps;
	printf("eps must be in range (0,1)\n");
	do
	{
		EnterDouble(&eps, "eps");
	} while (eps <= 0.0 || eps >= 1.0);

	double s = 1.0;
	double add = 1.0;
	int n = 1;

	while (fabs(add) > eps)
	{
		add *= (0.75 / n - 1.0) * x;
		s += add;
		n++;
	}

	printf("s = %lf n = %d eps = %lf\n", s, n, eps);

	getch();
	return 0;
}