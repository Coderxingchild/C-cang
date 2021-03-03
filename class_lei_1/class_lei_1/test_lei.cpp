#include<iostream>
using namespace std;

// �����Ա�����ڳ�ʼ���б��г�ʼ�������á�const��û��Ĭ�Ϲ�����Զ����Ա
// explicit �ؼ��ַ�ֹ���ι�����ʽ����ת��

//static ��Ա���������������ʼ��
//static ��Ա�����ж������
//������ʽ��  1. ���� . static��Ա    2.���� :: static ��Ա
// static ��Ա���������� this ָ��
//��ͨ�������Ե��� static ��Ա����


class Date {
public:
	//��Ԫ�������������Է��������κεط�
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

	//d << cout;    // �� ���� operator<< �����ڶ���

	cout << d;      //������Ԫ֮�������ʽ
}





class A {
public:
	//explicit A(int a):_a(a)  // ��ֹ������������-------ֻ��Ե��ι���
	A(int a) :_a(a)
	{
		cout << "A()" << endl;
	}
	A(const A& a)     //��������
	{
		_a = a._a;
	}
private:
	int _a;
	static int _b;   //static ��Ա���������������ʼ��
};

int A::_b = 10;

void test()
{
	A aa(1); //Ĭ�Ϲ���
	A aobj = aa;     //��������
	A aobj2 = 20;    //�����һ����������
}






//class A {
//public:
//	//��ʼ���б��ڳ�ʼ��ʱ˳�򣺰�������˳�򣬶����ǳ�ʼ���б�����д��˳��
//	A(int a) 
//		//:_a1(a), _a2(_a1)    //��ӡ���� 1 �� ���ֵ
//		:_a1(_a2),_a2(a)     //��ӡ����  1 1
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
//	// ��ʼ���б�ʵ�ֳ�ʼ������
//	//const\���ó�Ա�����ڳ�ʼ���б��н��г�ʼ��------����ĵط�Ϊ��ʼ���б�
//
//	{  //ȫȱʡ�������ڸ�ֵ�����ǳ�ʼ��
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
//	Time _time;   //�Զ����Աû��Ĭ�Ϲ��죬������ʾ��ʼ��
//	// �� _time ����ȫȱʡ����/Ĭ�Ϲ�������Ҫ��ʽ��ʼ��
//};
//void test()
//{
//	Date d(2021, 3, 3);
//}