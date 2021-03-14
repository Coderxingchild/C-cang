#include<iostream>
using namespace std;


//打印日期？？？？？？？？？？？？

#include<iostream>
using namespace std;

int GetDay(int year, int month)
{
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = day[month];
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		days += 1;
	}
	return days;
}
int main()
{
	int year, n;   //年份，第几天
	int month, day;    //月份，天数
	while (cin >> year >> n) {
		month = 1;
		if (n <= GetDay(year, month)) {
			day = n;
			break;
		}
		else {
			while (n > GetDay(year, month)) {
				n -= GetDay(year, month);
				month += 1;
				if (month == 13) {
					year += 1; month = 0;
				}
			}
		}
		if (0 == n) {
			month -= 1;
			n = GetDay(year, month);
		}
		day = n;
		printf("%04d-%02d-%02d\n", year, month, day);
	}
	return 0;
}






//日期累计


int GetDay(int year, int month)
{
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = day[month];
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		days += 1;
	}
	return days;
}
int main()
{
	int y, m, d;
	int k;    //示例个数
	int n;     //需要累计的天数
	cin >> k;
	while (k--) {
		cin >> y >> m >> d >> n;
		d += n;    //首先日期相加
		while (n > GetDay(y, m)) {
			//月份进位
			m += 1;
			d -= GetDay(y, m);
			if (m == 12) {
				//年份进位
				y += 1;
				m = 1;
			}
		}
		cout << y << "-" << m << "-" << d << endl;
	}
	return 0;
}