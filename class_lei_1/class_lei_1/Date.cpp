//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//
//class Date {
//public:
//	Date(int y = 1,int m = 1,int d = 1)
//	{
//		//判断日期是否有效
//		if (y <= 0 || m <= 0 || m > 12 || d <= 0 || d > getDay(y, m))
//		{
//			//日期无效
//			_y = 1; _m = 1; _d = 1;
//			cout << "日期无效，设为默认值：1-1-1" << endl;
//		}
//		else {
//			_y = y;
//			_m = m;
//			_d = d;
//		}	
//	}
//	int getDay(int y, int m)
//	{
//		static int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		int day = days[m];
//		//判断闰年的二月
//		if (m == 2 && ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))) {
//			day+=1;
//		}
//		return day;
//	}
//	//日期运算
//	Date& operator+=(int day)
//	{
//		if (day < 0)   //加一个负数 === 减一个正数
//			return *this -= -day;
//		this->_d += day;    //先相加天数
//		while(this->_d > getDay(_y, _m)) {
//			_d -= getDay(_y, _m);
//			++_m;
//			if (_m == 13) {
//				_m = 1;
//				++_y;
//			}
//		}
//		return *this;
//	}
//	Date operator+(int day)
//	{
//		//Date d = *this;
//		//Date d(*this);
//		Date d;  //拷贝 this 指针内容
//		d._y = _y;
//		d._m = _m;
//		d._d = _d;
//		return d += day;
//	}
//	Date& operator-=(int day)
//	{
//		if (day < 0) {  //减去一个负数====加一个正数
//			return *this += -day;
//		}
//		else {    //减一个正数
//			_d -= day;
//			while (_d <= 0) {
//				--_m;
//				if (0 == _m) {
//					--_y;
//					_m = 12;
//				}
//				_d += getDay(_y, _m);
//			}
//		}
//		return *this;
//	}
//	Date operator-(int day)
//	{
//		Date d = *this;
//		return d -= day;
//	}
//	Date& operator++()
//	{        //前置 ++
//		return *this += 1;
//	}
//	Date operator++(int)  //int 参数只是为了与前置 ++ 进行区分形成重载，实际无用
//	{
//		//后置 ++
//		Date tmp = *this;
//		*this += 1;
//		return tmp;
//	}
//	Date& operator--()
//	{
//		//前置 -- ，返回修改后值
//		return *this -= 1;
//	}
//	Date operator--(int)
//	{
//		//后置 --，返回原值
//		Date copy = *this;
//		*this -= 1;
//		return copy;
//	}
//	bool operator==(const Date& d)
//	{  //判等
//		return _y == d._y && _m == d._m && _d == d._d;
//	}
//	bool operator>(const Date& d)
//	{    // 大于
//		if (_y > d._y)
//			return true;
//		else if (_y == d._y) {
//			if (_m > d._m)
//				return true;
//			else if (_m == d._m) {
//				if (_d > d._d)
//					return true;
//			}
//		}
//		return false;
//	}
//	bool operator!=(const Date& d)
//	{
//		return !(*this == d);
//	}
//	bool operator>=(const Date& d)
//	{
//		return (*this > d) || (*this == d);
//	}
//	bool operator<=(const Date& d)
//	{
//		return !(*this > d);
//	}
//	bool operator<(const Date& d)
//	{
//		return !(*this >= d);
//	}
//	//两个日期相减
//	int operator-(const Date& d)
//	{
//		//小日期自加多少天等于大日期
//		Date max = *this;    /* Date max(*this)*/
//		Date min = d;
//		int flag = 1;
//		if (max < min) {
//			max = d;
//			min = *this;
//			flag = -1;
//		}
//		int day = 0;
//		while (min < max) {
//			++min;
//			++day;
//		}
//		return flag * day;
//	}
//private:
//	int _y;
//	int _m;
//	int _d;
//};