
#include<stdio.h>
int main() {
	int n, i, j, m, k;
	char ch;
	k = 1;
	scanf("%c %d", &ch, &n);
	getchar();
	//printf("%c %d",ch,n);
	m = (n + 1) / 2;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m - i - 1; j++) {
			printf(" ");
		}
		printf("%c", ch);
		if (i == 0) {
			ch++;
			printf("\n");
			continue;
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf(" ");
		}
		printf("%c", ch++);
		printf("\n");
	}ch = ch - 2;
	for (i = n - m; i > 0; i--) {
		for (j = 0; j < k; j++) {
			printf(" ");
		}k++;
		printf("%c", ch);
		for (j = 0; j < 2 * i - 3; j++) {
			printf(" ");
		}
		if (i == 1) {
			printf("\n");
			break;
		}
		printf("%c\n", ch--);
	}
	return 0;
}