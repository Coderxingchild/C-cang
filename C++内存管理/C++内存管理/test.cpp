#include<iostream>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

//������



//test 6
//class Date {
//public:
//	int GetDate(int year, int month) {    //��ȡ��Ӧ�·�����
//		static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		int day = days[month];
//		if (month == 2) {
//			//�ж�����
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//				day += 1;
//			}
//		}
//		return day;
//	} 
//	Date(int year = 2020, int month = 10, int day = 1) {  //ȫȱʡ����
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date(const Date& d) {  //��������
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//	~Date() { //��������
//		cout << "~Date" << endl;
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//	//��ֵ���������
//	Date& operator=(const Date& d) {
//		if (&d != this) {
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//	//���������
//	Date& operator+=(int day) {
//		if (day < 0) {            //��һ������ = ��һ������
//			return *this -= -day;
//		}
//		_day += day;            // �ӷ�Ҫ�����·������Ľ�λ����
//		while (_day > GetDate(_year, _month)) {
//			_month++;
//			if (_month == 13) {
//				_year++;
//				_month = 1;
//			}
//		}
//		return *this;
//	}
//	Date&operator-=(int day) {
//		if (day < 0) {                 // ��ȥһ������ = ����һ������
//			return *this += -day;
//		}
//		_day -= day;
//		while (_day < 0) {
//			_month--;
//			if (_month == 0) {
//				--_year;
//				_month = 12;
//			}
//			_day += GetDate(_year, _month);
//		}
//		return *this;
//	}
//	Date operator+() {
//		return *this += 1;
//	}
//	Date operator-() {
//		return *this -= 1;
//	}
//	Date& operator++(){  //ǰ��++    ����++i
//		return *this += 1;
//	}
//	Date operator++(int) {    //����++    ����i++
//		Date tmp = *this;
//		*this += 1;
//		return tmp;
//	}
//	Date& operator--() {   //ǰ��--    ����--i
//		return *this -= 1;
//	}
//	Date operator--(int) {   //����--   ����i--
//		Date tmp = *this;
//		*this -= 1;
//		return tmp;
//	}
//	bool operator==(const Date&d) {  // �е�
//		return _year == d._year && _month == d._month && _day == d._day;
//	}
//	bool operator!=(const Date&d) { //������
//		//return !operator==(d);
//		return (_year != _year) || (_month != d._month) || (_day != d._day);
//	}
//	bool operator >=(const Date&d) {
//		//return (operator==(d) || operator>(d));
//		if (_year >= d._year) {
//			return true;
//		}
//		else if (_year == d._year) {
//			if (_month >= d._month) {
//				return true;
//			}
//			else if (_month == d._month) {
//				_day >= d._day;
//			}
//		}
//		return false;
//	}
//	bool operator >(const Date&d) {
//		if (_year > d._year) {
//			return true;
//		}
//		else if (_year == d._year) {
//			if (_month > d._month) {
//				return true;
//			}
//			else if (_month == d._month) {
//				_day > d._day;
//			}
//		}
//		return false;
//	}
//	bool operator<(const Date&d) {
//		return !operator>=(d);
//	}
//	bool operator<=(const Date&d) {
//		//return !operator>(d);
//		return (operator<(d) || operator==(d));
//	}
//	void PrintDate() {
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
////void test()
////{
////	Date d1(2020, 10, 24);
////	Date d2 = d1;
////	Date d3(d1);
////}
//void test()
//{
//	Date d1(2020, 10, 12);
//	d1 += 10;
//	d1.PrintDate();
//	d1 -= 20;
//	d1.PrintDate();
//	
//	Date d2(2019, 10, 2);
//	Date d3(2020, 10, 1);
//	Date d4(2020, 10, 12);
//	bool ret = d2 > d3;
//	ret = d4 <= d2;
//	ret = d3 >= d4;
//}
//int main()
//{
//	test();
//	return 0;
//}


//test 5
//class Date {
//public:
//	Date(int year = 2020, int month = 10, int day = 24) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)     //�������캯��
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
//		cout << "~String :������������" << endl;
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


//test 3 -----��������
//����������һ�������ҽ���һ��������������δ����ϵͳ�Զ�Ĭ�ϣ�ϵͳ�Զ�������������
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
//	Date() {     //�޲ι���
//		_year = 2020;
//		_month = 10;
//		_day = 11;
//	}
//	Date(int year = 2020, int month = 10, int day = 20) {  //ȫȱʡ����
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
//	Date d1(2020,10,24);   // �����вι��캯��
//}
//int main()
//{
//	test();
//	return 0;
//}