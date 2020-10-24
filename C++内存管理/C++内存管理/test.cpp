#include<iostream>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

//日期类


//test 6
class Date {
public:
	int GetDate(int year, int month) {    //获取相应月份天数
		static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = days[month];
		if (month == 2) {
			//判断闰年
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
				day += 1;
			}
		}
		return day;
	} 
	Date(int year = 2020, int month = 10, int day = 1) {  //全缺省构造
		_year = year;
		_month = month;
		_day = day;
	}
	//Date(const Date& d) {  //拷贝构造
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}
	~Date() { //析构函数
		cout << "~Date" << endl;
		_year = 0;
		_month = 0;
		_day = 0;
	}
	//赋值运算符重载
	Date& operator=(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	//运算符重载
	Date&operator+=(int day);
	Date&operator-=(int day);
	Date operator+();
	Date opeartor-();
	Date& operate++(); //前置
	Date operator++(int);//后置
private:
	int _year;
	int _month;
	int _day;
};
void test()
{
	/*Date d1(2020, 10, 24);
	Date d2 = d1;
	Date d3(d1);*/



}
int main()
{
	test();
	return 0;
}


//test 5
//class Date {
//public:
//	Date(int year = 2020, int month = 10, int day = 24) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)     //拷贝构造函数
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	Date d1;
//	Date d2 = d1;
//	Date d3(d2);
//}
//int main()
//{
//	test();
//	return 0;
//}


//test 4
//#pragma warning (disable:4996)
//class String {
//public:
//	String(const char* str = "zhen") {
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy( _str, str);
//	}
//	~String()
//	{
//		cout << "~String :这是析构函数" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person {
//private:
//	String _name;
//	int _age;
//};
//int main()
//{
//	Person ff;
//	return 0;
//}


//test 3 -----析构函数
//析构函数：一个类有且仅有一个析构函数，若未定义系统自动默认；系统自动调用析构函数
//typedef int DataType;
//class SeqList {
//public:
//	SeqList(int capacity = 10) {
//		_p = (DataType*)malloc(capacity * sizeof(DataType));
//		assert(_p);
//		_size = 0;
//		_capacity = capacity;
//	}
//	~SeqList() {
//		if (_p) {
//			free(_p);
//			_p = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//private:
//	int* _p;
//	size_t _size;
//	size_t _capacity;
//};
//void test()
//{
//	SeqList m1;
//}
//int main()
//{
//	test();
//	return 0;
//}




//test 2

//class Time {
//public:
//	Time() {
//		_hour = 17;
//		_minute = 01;
//		_second = 50;
//	}
//	/*Time(int hour = 17, int minute = 02, int second = 30) {
//		_hour = hour;
//		_minute = minute;
//		_second = second;
//	}*/
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date {
//public:
//	Date()
//	{
//		_year = 2020;
//		_month = 10;
//		_day = 24;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Time t;
//};
//void test()
//{
//	Date d1;
//}
//int main()
//{
//	test();
//	return 0;
//}



// test 1

//class Date {
//public:
//	Date() {     //无参构造
//		_year = 2020;
//		_month = 10;
//		_day = 11;
//	}
//	Date(int year = 2020, int month = 10, int day = 20) {  //全缺省构造
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	Date d1(2020,10,24);   // 调用有参构造函数
//}
//int main()
//{
//	test();
//	return 0;
//}