#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

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