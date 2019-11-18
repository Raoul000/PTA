#include <stdio.h>  
#include <math.h>
int main() {
	double x;//    5>=x>=0
	int k = 1;
	double sum = 1, sum_1 = 1;
	int i;
	double item = 11;
	scanf("%lf", &x);
	while (fabs(item) > 0.00001) {
		for (i = 1; i <= k; i++) {
			sum_1 *= i;
		}
		item = pow(x, k) / sum_1;
		sum = sum + item;
		k++;
		sum_1 = 1.0;
	}
	printf("%.4f", sum);
	return 0;
}
