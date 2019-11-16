
#include <stdio.h>

void hollowPyramid(int n);

int main()
{
	int n;

	scanf("%d", &n);
	hollowPyramid(n);

	return 0;
}
void hollowPyramid(int n)
{
	int i, j;
	if (n >= 1 && n <= 9)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				printf(" ");
			}
			if (i == 1)
			{
				printf("%d", i);
			}
			else if (i > 1 && i < n)
			{
				printf("%d", i);
				for (j = 1; j <= 2 * i - 3; j++)
				{
					printf(" ");
				}
				printf("%d", i);
			}
			else if (i == n)
			{
				for (j = 1; j <= 2 * i - 1; j++)
				{
					printf("%d", i);
				}
			}
			printf("\n");
		}
	}
}