/*int my_strcpy_s(char str1[],int x,char str2[]);
����str1��str2���û�����Ĳ����� �������ַ���str2��ȫ�ؿ������ַ���str1�С�
x���ַ�����str1�ĳ��ȡ�
���ַ���str2�ĳ��ȳ�������str1�ĳ���ʱ���������ܴ洢��str1���鳤�ȷ�Χ�ڵ���Ĳ����ַ������ҷ���0��
����str2������str1 ���ҷ���1��*/
int my_strcpy_s(char str1[], int x, char str2[])
{
	int m = 0, n = 0, i, f = 1, j = 0;
	while (str1[m] != '\0') {
		m++;
	}
	while (str2[n] != '\0') {
		n++;
	}
	for (i = 0; i < n; i++) {
		str1[i] = str2[i];
	}
	str1[i] = '\0';
	while (str1[m] != '\0') {
		m++;
	}
	if (m > N) {
		str1[N - 1] = '\0';
		f = 0;
	}
	return f;
}