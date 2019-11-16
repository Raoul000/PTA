#include <stdio.h>
int main()
{
	int n,i,j;
	int max, min;
	scanf("%d", &n);
	int a[6][6], lineMax[6], columnMin[6];
	for (i = 0; i<n; i++) {
		max = a[i][0];
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if (max < a[i][j])max = a[i][j];
		}
		lineMax[i] = max;
	}
	for (j = 0; j < n; j++) {
		min = a[0][j];
		for (i = 0; i < n; i++) {
			if (min > a[i][j])min = a[i][j];
		}
		columnMin[j] = min;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j <= n; j++) {
			if (lineMax[i] == columnMin[j]) {
				printf("%d %d", i,j);
				return 0;
			}
		}
	}
	if (i == n)printf("NONE");
	return 0;
}