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




//����һ����ݺ����֣����������

//#include<iostream>
//using namespace std;
//
//int Getday(int year, int month)
//{
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[month];
//	if (2 == month) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {        //�ж�����
//			++day;
//		}
//	}
//	return day;
//}
//int main()
//{
//	int year=2292, n=72;
//	int i = 1;    //��һ�·ݿ�ʼ
//	if (year >= 0 && n >= 0) {  //������Ч����
//		for (i = 1; n > Getday(year, i); ++i) {
//			n -= Getday(year, i);
//		}
//		if (i >= 13) {
//			year += 1;
//			i -= 12;
//		}
//		cout << year << "-" << i << "-" << n << endl;
//	}
//	return 0;
//}



//�������ڲ�ֵ


