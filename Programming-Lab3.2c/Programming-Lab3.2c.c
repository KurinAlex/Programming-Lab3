#include <stdio.h>

int main()
{
	int n;
	int m;
	float P = 1.0;

	printf("Enter n:\n");
	scanf_s("%d", &n);

	printf("Enter m:\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++)
	{
		P *= (float)(m - i) / (i + 1);
	}

	printf("P = %d", (int)P);

	getch();
}