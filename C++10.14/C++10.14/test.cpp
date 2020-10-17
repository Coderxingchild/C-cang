#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class Date {
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		if (year < 0 || (month <= 0 || month > 12) || day <=0 || day > GetDay(year,month)) 
		{
			cout << "无效日期，即将重置" << endl;
			_year = 1900;
			_month = 1;
			_day = 1;
		}
		_year = year;
		_month = month;
		_day = day;
	}
	int GetDay(int year, int month)
	{
		static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = days[month];
		if (2 == month)
		{
			//判断是否是闰年
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
				++day;
		}
		return day;
	}
	Date operator+(int day);
	Date operator-(int day)
	{
		//Data d=*this;
		Date d ;
		d._year = _year;
		d._month = _month;
		d._day = _day;

		return d -= day;
	}
	Date& operator+=(int day)
	{
		if (day < 0) {    //判断所加天数的正负
			return *this -= -day;
		}
		_day += day;
		while (_day > GetDay(_year, _month)) {
		//月份进位
			_day -= GetDay(_year, _month);
			_month++;
			if (_month == 13) {
				_month = 1;
				_year++;    //年份进位
			}
		}
		return *this;
	}
	Date& operator-=(int day)
	{
		//判断是否为负数
		if (day < 0) {
			return *this += -day;
		}
		_day -= day;
		while (_day < 0) {
			//月份借位
			--_month;
			if (0 == _month) {
				--_year;
				_month = 12;
			}
			_day += GetDay(_year, _month);
		}
		return *this;
	}
	Date& operator++()  //前置++
	{
		//++i
		return *this += 1;
	}
	Date operator++(int)
	{
		Date tmp = *this;
		*this += 1;
		return tmp;
	}
	Date& operator--()
	{
		//--d
		return *this -= 1;
	}
	Date operator--(int) //后置--
	{
		Date tmp(*this);
		//d--
		*this -= 1;
		return tmp;
	}
	////////////////////////////////////////////////////////////////////////////////////
	bool operator==(const Date&d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}
	bool operator!=(const Date&d)
	{
		return !operator==(d);
	}
	bool operator<=(const Date&d)
	{
		//return !operator>(d);
		if (_year <= d._year) {
			return true;
		}
		else if (_year == d._year)
		{
			if (_month <= d._month) {
				return true;
			}
			else if (_day <= d._day) {
				return true;
			}
		}
		return false;
	}
	bool operator>=(const Date&d)
	{
		//return !operator<(d);
		//return (*this > d) || (*this == d);
		if (_year >= d._year) {
			return true;
		}
		else if (_year == d._year)
		{
			if (_month >= d._month) {
				return true;
			}
			else if (_day >= d._day) {
				return true;
			}
		}
		return false;
	}
	bool operator>(const Date&d)
	{
		//return !operator <= (d);
		//return !(*this <= d);
		if (_year > d._year) {
			return true;
		}
		else if (_year == d._year)
		{
			if (_month > d._month) {
				return true;
			}
			else if (_day > d._day) {
				return true;
			}
		}
		return false;
	}
	bool operator<(const Date&d)
	{
		return !operator>=(d);
	}
	//////////////////////////////////////////////////////////
	void PrintDate()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
//void test()
//{
//	/*Date d(2020, 10, 1);
//	d.PrintDate();
//	d += 10;
//	d.PrintDate();
//	d += 67;
//	d.PrintDate();
//	d -= 20;
//	d.PrintDate();*/
//
//	/*Date d(2020, 10, 17);
//	Date& rd = ++d;
//	rd = d.operator++();
//
//	Date d1(2020, 10, 17);
//	Date& d2 = --d1;
//	d2 = d1.operator++();*/
//}
void test()
{
	Date d1(2020, 10, 12);
	Date d2(2020, 10, 14);
	Date d3(2020, 9, 12);
	Date d4(2021, 10, 12);
	bool ret = d1 > d2;
	ret = d1 != d3;
	ret = d2 < d4;
	ret = d1 >= d4;
	ret = d2 <= d3;
}
int main()
{
	test();
	return 0;
}



//赋值:用已经存在的对象创建新的对象
//拷贝构造:用已经存在的对象去修改另一个已经存在的对象的内容

//class Date {
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)   //拷贝构造函数
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Date& operator=(const Date&d)
//	{
//		if (this != &d) {            //判断是不是自己给自己赋值
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	Date d1(2020, 10, 14);
//	Date d2 = d1;  //拷贝构造
//	d2 = d1;       //赋值
//}
//int main()
//{
//	test();
//	return 0;
//}