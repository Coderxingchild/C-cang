#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

// ģ��


//��ģ��
//template <class T>
//class A {
//public:
//	A(int a = 10) :_a(a)
//	{}
//	~A();    //�����������������������ⶨ��
//private:
//	int _a;
//};
//template <class T>
//A<T>::~A()
//{
//	if (_a)
//		_a = 0;
//}



//����ģ��
//template<typename T1>
//T1 Add(const int& a, const int& b)
//{
//	return a + b;
//}
//int Add(const int& a, const int& b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 1;
//	int b = 2;
//	Add(a, b);            //����ѡȡ�Ѿ����ڵĺ���
//}
//int main()
//{
//	test();
//	return 0;
//}



//template<class T>
//T Add(const T& a,const T& b)
//{
//	return a + b;
//}
//int Add(int& a, int& b)
//{
//	return a + b;
//}
//int main()
//{
//	int m = 1, n = 3;
//	Add(m,n);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	double b = 1.0;
//	Add<int>(a, b);
//	return 0;
//}



//����ģ��

//template <typename T1>
//void Swap(T1& a, T1& b)
//{
//	T1 tmp = b;
//	b = a;
//	a = tmp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	double c = 1.0, d = 2.0;
//	char e = 'e', f = 'f';
//
//	//��ʽʵ����
//	Swap(a, b);
//	Swap(c, d);
//	Swap(e, f);           //ͨ�������鿴
//
//	return 0;
//}












//�ڴ����

//malloc \ calloc \ realloc

//class Date {
//	int _year = 1900;
//	int _mont = 1;
//	int _day = 1;
//};
//void test()
//{
//	Date *pd = (Date*)malloc(sizeof(Date));
//}
//int main()
//{
//	test();  //���ֵ��malloc ֻ���ٿռ䲻���г�ʼ��
//	return 0;
//}




//���������������һ��ĵڶ�����
//int main()
//{
//	static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	while (cin >> year >> month >> day) {
//		int ret = 0;
//		for (int i = 1; i < month; ++i) {
//			ret += days[i];
//		}
//		ret += day;
//		if (month > 2) {
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//				++ret;
//			}
//			cout << ret << endl;
//		}
//	}
//}



//1+2+3+4+..............+n
//class Solution {
//public:
//	class Sum {
//	public:
//		Sum() {
//			_sum = 0;    //����
//			_i = 1;
//			_sum += _i;
//			++_i;
//		}
//	};
//	int Sum_Solution(int n) {
//		Sum arr[n];
//		return _sum;
//	}
//private:
//	static int _sum;
//	static int _i;
//};
////��̬��Ա�������ʼ��
//int Solution::_sum = 0;
//int Solution::_i = 1;