#include <stdio.h>
#define MAXN 10

void sort(int a[], int n);

int main()
{
	int i, n;
	int a[MAXN];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	sort(a, n);

	printf("After sorted the array is:");
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}
void sort(int a[], int n)
{
	int temp, k, min, i;
	for (k = 0; k < n - 1; k++) {
		min = k;
		for (i = k + 1; i < n; i++)
			if (a[i] < a[min])
				min = i;
			temp = a[min];
			a[min] = a[k];
			a[k] = temp;
		}
	
}
/*冒泡排序
void bubble_sort(int a[],int n)//n为数组a的元素个数
{
 int i,j,temp;
 for(j=1;j<n;j++)
  for(i=0;i<n-j;i++)
  {
   if(a[i]>a[i+1])//数组元素大小按升序排列
   {
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
   }
  }
}
*/