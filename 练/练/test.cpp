#include<iostream>
#include<string>
#include<vector>
using namespace std;



//*this 测试

//class Date {
//public:
//	Date(int year=1900, int month=10, int day=3)   //构造函数,全缺省构造
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)   //拷贝构造
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void PrintDate()    //打印日期
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//	// cout <<"在成员函数外部: "<< this->_year << "-" << this->_month << "-" << this->_day << endl;            //在成员函数外部定义--错误
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








//杨辉三角

//vector<vector<int>> generate(int numRows)
//{
//	vector<vector<int>>  aa;      //创建一个二维数组
//	aa.resize(numRows);           //开辟空间
//	for (int i = 0; i < numRows; ++i) {
//		aa[i].resize(i + 1, 1);    //开辟每一行对应列的空间
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
