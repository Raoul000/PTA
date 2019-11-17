#include <stdio.h>
int main()
{
	int a, b, isnan = 0;
	char op = '0';
	scanf("%d", &a);
	while (op != '=')
	{
		scanf("%c", &op);
		if (op == '=')
			break;
		scanf("%d", &b);
		if (op == '+')
			a = a + b;
		else if (op == '-')
			a = a - b;
		else if (op == '*')
			a = a * b;
		else if (op == '/')
		{
			if (b != 0)
			{
				a = a / b;
			}
			else
				isnan = 1;
		}
		else isnan = 1;
	}
	if (isnan == 1)
		printf("ERROR");
	else if (isnan == 0)
		printf("%d", a);
	return 0;
}