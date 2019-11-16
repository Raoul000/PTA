#include <stdio.h>

int MonthDays(int year, int month);

int main()
{
	int ndays, month, year;

	scanf("%d", &year);
	for (month = 1; month <= 12; month++) {
		ndays = MonthDays(year, month);
		printf("%d ", ndays);
	}

	return 0;
}

int MonthDays(int year, int month)
{
	int cnt;
	switch (month)
	{
	case 1:cnt = 31; break;
	case 2:if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		cnt = 29;
		   else cnt = 28; break;
	case 3:cnt = 31; break;
	case 4:cnt = 30; break;
	case 5:cnt = 31; break;
	case 6:cnt = 30; break;
	case 7:cnt = 31; break;
	case 8:cnt = 31; break;
	case 9:cnt = 30; break;
	case 10:cnt = 31; break;
	case 11:cnt = 30; break;
	case 12:cnt = 31; break;
	default:break;
	}
	return cnt;

}