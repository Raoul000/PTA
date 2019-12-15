/*int my_strcpy_s(char str1[],int x,char str2[]);
参数str1和str2是用户传入的参数。 函数将字符串str2安全地拷贝到字符串str1中。
x是字符数组str1的长度。
当字符串str2的长度超出数组str1的长度时，仅拷贝能存储在str1数组长度范围内的最长的部分字符串，且返回0；
否则将str2拷贝到str1 ，且返回1。*/
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