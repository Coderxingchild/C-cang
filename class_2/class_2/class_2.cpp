#include<iostream>

using namespace std;

//��Ԫ��

class Date {
public:
	Date(int year=1,int month=1,int day=1)
		:_year(year),_month(month),_day(day)   //��ʼ���б�
	{}
	void SetTimeOfDate(int hour, int minute, int second)
	{   //����ʱ��
		_time._hour = hour;
		_time._minute = minute;
		_time._second = second;
	}
private:
	int _year;
	int _month;
	int _day;
	// �Զ�������
	Time _time;
};

class Time {
	friend class Date;   //��Ԫ��
public:
	Time(int hour = 1, int minute = 1, int second = 1) :_hour(hour), _minute(minute), _second(second)
	{}
	void fun()
	{
		cout << _hour << ":" << _minute << ":" << _second << endl;
	}
private:
	int _hour;
	int _minute;
	int _second;
};









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


int main()
{
	test();
	return 0;
}
