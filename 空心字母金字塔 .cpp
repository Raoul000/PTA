#include<stdio.h>

int main()
{
	char a;	int i, j;
	scanf("%c", &a);
	for (i = 1; i <= a - 'A' + 1; i++)
	{
		for (j = 0; j < 40 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
		{
			if (i == a - 'A' + 1)
				printf("%c", 'A' + i - 1);
			else if (j == 1 || j == 2 * i - 1)
				printf("%c", 'A' + i - 1);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}