#include<iostream>
#include<string>
#include<vector>
using namespace std;



//*this ����

//class Date {
//public:
//	Date(int year=1900, int month=10, int day=3)   //���캯��,ȫȱʡ����
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)   //��������
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void PrintDate()    //��ӡ����
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//	// cout <<"�ڳ�Ա�����ⲿ: "<< this->_year << "-" << this->_month << "-" << this->_day << endl;            //�ڳ�Ա�����ⲿ����--����
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	Date d(2020, 10, 22);
//	d.PrintDate();
//	Date d1 = d;
//	d1.PrintDate();
//}
//
//int main()
//{
//	test();
//	return 0;
//}








//�������

//vector<vector<int>> generate(int numRows)
//{
//	vector<vector<int>>  aa;      //����һ����ά����
//	aa.resize(numRows);           //���ٿռ�
//	for (int i = 0; i < numRows; ++i) {
//		aa[i].resize(i + 1, 1);    //����ÿһ�ж�Ӧ�еĿռ�
//
//		/*aa[i][0] = 1;
//		aa[i][i] = 1;*/
//	}
//	for (int i = 2; i < numRows; ++i) {
//		for (int j = 1; j < i ; ++j) {
//			aa[i][j] = aa[i - 1][j] + aa[i - 1][j - 1];
//		}
//	}
//	return aa;
//}
