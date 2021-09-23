#include <stdio.h>

int main()
{
	int n;
	float num;
	float sum = 0;

	printf("Enter size of number sequence:\n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Enter %d number:\n", i + 1);
		scanf_s("%f", &num);
		sum += num;
	}

	printf("Sum = %f", sum);

	getch();
}