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




//给定一个年份和数字，输出年月日

//#include<iostream>
//using namespace std;
//
//int Getday(int year, int month)
//{
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[month];
//	if (2 == month) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {        //判断闰年
//			++day;
//		}
//	}
//	return day;
//}
//int main()
//{
//	int year=2292, n=72;
//	int i = 1;    //从一月份开始
//	if (year >= 0 && n >= 0) {  //输入有效数据
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



//计算日期差值


