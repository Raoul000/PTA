#include <stdio.h>

int main()
{
	int i, j, h, k;

	scanf("%d", &h);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h - i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (j = 2; j <= i; j++)
		{
			printf(" *");

		}
		printf("\n");
	}

	return 0;
}
