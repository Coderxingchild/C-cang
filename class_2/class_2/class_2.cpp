#include<iostream>

using namespace std;

//���ۼӺͣ�����ʹ�ó˳�����ѭ����䡢�ж�ѡ�����

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
		Sum()     //�ڲ���Ĺ��캯��
		{
			_sum += _i;
			++_i;
		}
	};
	int Sum_solution(int n)
	{
		//����
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






//�ڲ���
//�ڲ���������������Ԫ��
//�����Ԫ�ࣺ�ڲ����п���ֱ�ӷ����ⲿ����static��Ա
//�ڲ������ͨ���ⲿ��ķ���Ȩ�ޣ������ڲ���Ŀɼ���Χ
//�����λ�û�Ӱ���ڲ���Ŀɼ���Χ
//�ڲ���������ⲿ�࣬���������ⲿ��
//�ⲿ�಻���ڲ������Ԫ��

//class A {
//	friend class C;     //��Ԫ��
//	class B {        //�ڲ���
//	public:
//		void setA(A& a)
//		{
//			a._a = _b;
//			_sa = 100;     //�ڲ������ֱ�ӷ��ʳ�Ա
//		}
//	private:
//		int _b = 2;
//	};
//private:
//	int _a = 1;
//	static int _sa;     //static ��Ա����
//};
//int A::_sa = 1;       //��̬��Ա�����ʼ��
//class C {
//public:
//	void seta(A& a)  //��Ԫ��ϵ
//	{
//		a._a = _c;
//		a._sa = 10;
//		A::_sa = 20;   //��Ҫ�����������
//	}
//private:
//	int _c = 3;
//};








//��Ԫ��ϵ�ǵ���ģ����ܴ���


//��Ԫ��

//class Date {
//public:
//	Date(int year=1,int month=1,int day=1)
//		:_year(year),_month(month),_day(day)   //��ʼ���б�
//	{}
//	void SetTimeOfDate(int hour, int minute, int second)
//	{   //����ʱ��
//		_time._hour = hour;
//		_time._minute = minute;
//		_time._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	// �Զ�������
//	Time _time;
//};
//
//class Time {
//	friend class Date;   //��Ԫ��
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
//	//������Ԫ����
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
////�������Ϊ����ֵ֧���������
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
//	//���
//	cout << d;     //��д
//	operator<<(cout, d);    //������ʽ
//
//	//�������----��Ԫ��������ֵ����Ϊ ostream&
//	cout << d << endl;
//	operator<<(cout, d) << endl;
//
//	cout << d << d;
//	operator<<(operator<<(cout, d), d);
//	cout.operator<<(endl); //��Ա����
//
//
//	//����
//	Date d(2021, 3, 8);
//	cin >> d;
//	//��������
//	cin >> d >> d >> d;
//}


//int main()
//{
//	test();
//	return 0;
//}
