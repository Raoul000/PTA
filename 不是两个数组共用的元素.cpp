#include <stdio.h>
int main()
{
	int na, nb, a[20], b[20], c[40], i, j, k;
	scanf("%d", &na);
	for (i = 0; i < na; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &nb);
	for (i = 0; i < nb; i++){
		scanf("%d", &b[i]);
	}
	k = 0;
	for (i = 0; i < na; i++){
		for (j = 0; j < nb; j++){
			if (a[i] == b[j]) {
				break;}
		}
		if (j == nb){
			c[k] = a[i];
			k++;
		}
	}
	for (i = 0; i < nb; i++){
		for (j = 0; j < na; j++){
			if (b[i] == a[j]){
				break;
			}
		}
		if (j == na){
			c[k] = b[i];
			k++;
		}
	}
	printf("%d", c[0]);
	for (i = 1; i < k; i++){
		for (j = 0; j < i; j++){
			if (c[i] == c[j]){
				break;
			}
		}
		if (j == i){
			printf(" %d", c[i]);
		}
	}
	return 0;
}