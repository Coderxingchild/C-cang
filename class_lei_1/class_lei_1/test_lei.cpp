#include<iostream>
using namespace std;

// 三类成员必须在初始化列表中初始化：引用、const、没有默认构造的自定义成员
// explicit 关键字防止单参构造隐式类型转换

//static 成员变量必须在类外初始化
//static 成员是所有对象共享的
//访问形式：  1. 对象 . static成员    2.类型 :: static 成员
// static 成员函数不包含 this 指针
//普通函数可以调用 static 成员函数


class Date {
public:
	//友元函数的声明可以放在类内任何地方
	friend void operator<<(ostream& _cout, const Date& d);

	Date(int y = 1, int m = 1, int d = 1)
		:_y(y),_m(m),_d(d)
	{}
private:
	int _y;
	int _m;
	int _d;
};

void operator<<(ostream& _cout, const Date& d)
{
	_cout << d._y << "-" << d._m << "-" << d._d << endl;
}
void test()
{
	Date d(2021, 3, 3);

	//d << cout;    // 若 重载 operator<< 在类内定义

	cout << d;      //定义友元之后输出方式
}





class A {
public:
	//explicit A(int a):_a(a)  // 防止产生匿名对象-------只针对单参构造
	A(int a) :_a(a)
	{
		cout << "A()" << endl;
	}
	A(const A& a)     //拷贝构造
	{
		_a = a._a;
	}
private:
	int _a;
	static int _b;   //static 成员变量必须在类外初始化
};

int A::_b = 10;

void test()
{
	A aa(1); //默认构造
	A aobj = aa;     //拷贝构造
	A aobj2 = 20;    //会产生一个匿名对象
}






//class A {
//public:
//	//初始化列表在初始化时顺序：按照声明顺序，而不是初始化列表中书写的顺序
//	A(int a) 
//		//:_a1(a), _a2(_a1)    //打印出来 1 和 随机值
//		:_a1(_a2),_a2(a)     //打印出来  1 1
//	{}
//	void Print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//void test()
//{
//	A aa(1);
//	aa.Print();
//}






//class Time {
//public:
//	Time(int hour, int minute, int second)
//		:_hour(hour), _minute(minute), _second(second)
//	{}
//	Time& operator=(const Time& t)
//	{
//		_hour = t._hour;
//		_minute = t._minute;
//		_second = t._second;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date {
//public:
//	Date(int year, int month, int day)
//		:_year(year),_month(month),_day(day),_hour(12)
//		,_time(12,2,3)
//	// 初始化列表：实现初始化操作
//	//const\引用成员必须在初始化列表中进行初始化------定义的地方为初始化列表
//
//	{  //全缺省构造属于赋值，不是初始化
//	//	_year = year;
//	//	_month= month;
//	//	_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	const int _hour;
//
//	Time _time;   //自定义成员没有默认构造，必须显示初始化
//	// 若 _time 存在全缺省构造/默认构造则不需要显式初始化
//};
//void test()
//{
//	Date d(2021, 3, 3);
//}