#include <stdio.h>

int main()
{
	int n;
	float x;
	float P = 1.0;

	printf("Enter size of number sequence:\n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		while (1)
		{
			printf("Enter x%d:\n", i + 1);
			scanf_s("%f", &x);
			if (x != 1.0)
			{
				P *= x * x / (1.0 - x);
				break;
			}
			printf("x can`t be equal to 1\n");
		}
	}

	printf("P = %f", P);

	getch();
}