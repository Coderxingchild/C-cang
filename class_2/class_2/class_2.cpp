#include<iostream>

using namespace std;

//求累加和，不能使用乘除法、循环语句、判断选择语句

// 1+2+3+...+n

//int Sum(int n)
//{
//	//return n * (n + 1) / 2;
//
//	int sum = 0;
//	for (int i = 1; i <= n; ++i)
//		sum += i;
//	return sum;
//}


class Solution {
public:
	class Sum {
	public:
		Sum()     //内部类的构造函数
		{
			_sum += _i;
			++_i;
		}
	};
	int Sum_solution(int n)
	{
		//重置
		_sum = 0;
		_i = 0;
		//Sum array[n];    ////////////////??????????
		return _sum;
	}
private:
	static int _i;
	static int _sum;
};

int Solution::_i = 1;
int Solution::_sum = 0;






//内部类
//内部类作用类似于友元类
//相比友元类：内部类中可以直接访问外部类中static成员
//内部类可以通过外部类的访问权限，限制内部类的可见范围
//定义的位置会影响内部类的可见范围
//内部类独立于外部类，不从属于外部类
//外部类不是内部类的友元类

//class A {
//	friend class C;     //友元类
//	class B {        //内部类
//	public:
//		void setA(A& a)
//		{
//			a._a = _b;
//			_sa = 100;     //内部类可以直接访问成员
//		}
//	private:
//		int _b = 2;
//	};
//private:
//	int _a = 1;
//	static int _sa;     //static 成员变量
//};
//int A::_sa = 1;       //静态成员类外初始化
//class C {
//public:
//	void seta(A& a)  //友元关系
//	{
//		a._a = _c;
//		a._sa = 10;
//		A::_sa = 20;   //需要加作用域访问
//	}
//private:
//	int _c = 3;
//};








//友元关系是单向的，不能传递


//友元类

//class Date {
//public:
//	Date(int year=1,int month=1,int day=1)
//		:_year(year),_month(month),_day(day)   //初始化列表
//	{}
//	void SetTimeOfDate(int hour, int minute, int second)
//	{   //设置时间
//		_time._hour = hour;
//		_time._minute = minute;
//		_time._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _time;
//};
//
//class Time {
//	friend class Date;   //友元类
//public:
//	Time(int hour = 1, int minute = 1, int second = 1) :_hour(hour), _minute(minute), _second(second)
//	{}
//	void fun()
//	{
//		cout << _hour << ":" << _minute << ":" << _second << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};









//class Date {
//	//声明友元函数
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, Date& d);
//public:
//	Date(int y = 1, int m = 1, int d = 1)
//		:_y(y),_m(m),_d(d)
//	{}
//private:
//	int _y;
//	int _m;
//	int _d;
//};
////输出流作为返回值支持连续输出
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._y << "-" << d._m << "-" << d._d;
//	return _cout;
//}
//istream& operator>>(istream& _cin,Date& d)
//{
//	_cin >> d._y >> d._m >> d._d;
//	return _cin;
//}
//
//void test()
//{
//	Date d(2021, 3, 8);
//	//输出
//	cout << d;     //简写
//	operator<<(cout, d);    //完整形式
//
//	//连续输出----友元函数返回值必须为 ostream&
//	cout << d << endl;
//	operator<<(cout, d) << endl;
//
//	cout << d << d;
//	operator<<(operator<<(cout, d), d);
//	cout.operator<<(endl); //成员函数
//
//
//	//输入
//	Date d(2021, 3, 8);
//	cin >> d;
//	//连续输入
//	cin >> d >> d >> d;
//}


//int main()
//{
//	test();
//	return 0;
//}
