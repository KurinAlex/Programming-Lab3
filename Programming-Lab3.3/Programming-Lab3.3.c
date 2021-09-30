#include <stdio.h>
#include <float.h>

int main()
{
	int n;
	float num;
	float min = FLT_MAX;

	printf("Enter size of number sequence:\n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Enter %d number:\n", i + 1);
		scanf_s("%f", &num);
		if (num < min)
		{
			min = num;
		}
	}

	printf("Min = %f", min);

	getch();
}