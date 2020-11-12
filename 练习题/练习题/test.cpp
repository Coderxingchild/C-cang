#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


//string  

//int main()
//{
//	return 0;
//}
//实现两个字符串的相加
//int Add(string num1, string num2)
//{
//	int len1 = num1.size() - 1;
//	int len2 = num2.size() - 1;   //指向个位数字
//	int step = 0;//进位
//	int curSum = 0;
//	string ret;
//
//	while (len1 >= 0 || len2 >= 0) {
//		curSum = step;     //累加上一步计算的进位
//		if (len1 >= 0)
//			curSum += num1[len1] - '0';
//		if (len2 >= 0)
//			curSum += num2[len2] = '0';
//
//		if (curSum > 9) {
//			step = 1;
//			curSum -= 10;  //存在进位
//		}
//		else step = 0;
//	}
//	ret.insert(0, 1, curSum);  //头插，保存当前位计算结果
//	 //ret += curSum + '0';   //尾插
//	len1--;
//	len2--;
//	if (step == 1) {   //如果最高位有进位-----头插
//		ret.insert(0, 1, '1');
//		//ret+='1';    //尾插
//	}
//	cout << ret << endl;
//	//reverse(ret.begin(),ret.end());      //若果用尾插法需要逆置
//}


//求字符串中有效字符个数：不包含空格
//int main()
//{
//	string s;
//	getline(cin, s);
//	size_t pos = s.rfind(' ');    // 反向查找空格
//	if (pos != string::npos) {
//		cout << s.size() << endl;
//	}else
//	cout << s.rfind - pos - 1 << endl;
//	return 0;
//}




//找只出现一次的字符
//int first(string s)
//{
//	int counts[26] = { 0 };
//	for (const auto& ch : s) {   //统计个数
//		counts[ch - 'a']++;
//	}
//	for (int i = 0; i < s.size(); ++i) {
//		if (counts[s[i] - 'a'] == 1) {   //寻找只出现一次的字符
//			cout << s[i] << endl;
//		}
//		return -1;
//	}
//}



//输入字符，将字符转为整型

//int zhuanzheng(const string str)
//{
//	if (str.empty()) {
//		return 0;           //空字符返回0 
//	}
//	int i = 0, flag = 1, num = 0;
//	if (str[i] == '-') {
//		flag = -1;
//		++i;
//	}
//	if (str[i] == '+') {
//		++i;
//	}
//	for (; i < str.size(); ++i) {
//		num = num * 10 + flag * (str[i] - '0');
//	}
//	return num;
//}




//operator>>

//void test()
//{
//	//cin 不能输入带有空格的字符串
//	string s;
//	cin >> s;
//	operator>>(cin, s);     //输入,清空式输入
//
//	getline(cin, s);        //默认按行输入
//	getline(cin, s, ',');    // 逗号作为分隔符
//}


//operator +=
//void test()
//{
//	string str1 = "123";
//	string str2 = "abc";
//	str1 += str2;   //123abc
//	string& rs = str1 += str2;   //123abcabc
//}



//void test()
//{
//	//比较规则：从前往后按照每一个字符的 ASCII 值进行比较
//	int ret = strcmp("1", "12");
//	ret = strcmp("345", "92");
//
//	string s1 = "1";
//	string s2 = "12";
//	string s3 = "345";
//	string s4 = "92";
//
//	ret = s1 > s2;
//	ret = s1 > s3;
//}


// operator+=
//void test()
//{
//	string s = "1234";
//	s += 'a';
//	s += "bcd";        
//	cout << s << endl;
//	string s1 = "678";
//	s += s1;
//}


//void test()
//{
//	string s = "http://www.cplusplus.com/reference/string/string/?kw=string";
//	size_t pos = s.find("://");
//	if (pos != string::npos) {
//		size_t pos2 = s.find("/", pos + 3);
//		if (pos2 != string::npos) {
//			pos += 3;
//			string s2 = s.substr(pos, pos2 - 1);
//			cout << s2 << endl;
//		}
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//范围 for 
//void test()
//{
//	string s = "1234";
//	for (char ch : s) {
//		//for(auto& ch:s)  ----------- 可读可写
//		cout << ch << " ";
//		ch = 'a';   //不会修改内容
//	}
//	cout << endl;
//
//	/////////////////////////////////////////////
//
//	string s = "1234";
//	for (char& ch : s) {
//		//for(const char& ch:s)
//		//for(const auto& ch:s)  ----------- 只读
//		cout << ch << " ";
//		ch = 'a';   //会修改内容 ------- 引用类型
//	}
//	cout << endl;
//
//}




//迭代器的使用

//void printString(const string& str)
//{
//	string::const_reverse_iterator crit = str.crbegin();
//	while (crit != str.crend) {
//		cout << *crit << " ";      //只读
//		++crit;
//	}
//	cout << endl;
//}


//void test()
//{
//	string s = "12345";
//	string::reverse_iterator rit = s.rbegin();    // rbegin 指向最后一个元素
//	while (rit != s.rend) {
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	//string s = "1234";
//	//const string s1 = "4567";
//	//string::const_iterator cit = s.cbegin();
//	//string::const_iterator cit1 = s1.cbegin();  //只读 
//}



//void test()
//{
//	string s = "1234";
//	for (int i = 0; i < s.size(); ++i) {    //打印每一个元素
//		cout << s[i] << " ";
//	}
//	cout << endl;
//
//
//	//只读操作
//	cout << "const_iterator:" << endl;
//	string::const_iterator cit = s.cbegin();
//	while (cit != s.cend) {
//		cout << *cit << " ";
//	}
//	cout << endl;
//
//
//	//可读可写操作
//	cout << "iterator: " << endl;  //迭代器的使用
//	string::iterator it = s.begin();
//	while (it != s.end)
//	{
//		cout << *it << " ";   // 打印元素---迭代器解引用
//		//利用迭代器来修改内容  ：
//		//*it = 'a';   //输出全为 a
//		++it;   //迭代器自增
//	}
//	cout << endl;
//}


//void test()
//{
//	string s2 = "1234";
//	s2[0] = 'a';
//	s2[1] = 'b';
//	s2.operator[](2) = 'c';
//
//	string s = "1234";
//	s.at(0) = 'a';
//	s.at(1) = 'b';
//
//	const string s1 = "abcd";
//	cout << s1.at(1) << endl;
//	// s1.at(2) = '2';   //不可以修改
//
//	// s.at(5) = 'c';  //越界----出错
//
//	//////////////////////////////////////////////////////////////
//
//	//string str = "1234";
//	//cout << str << endl;
//
//	//str.front() = 'a';        //修改第一个字符
//	//cout << str << endl;
//
//	//str.back() = 'b';          //修改最后一个字符
//	//cout << str << endl;
//}





//void test()
//{
//	string str = "1234";
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//
//	str.resize(100);   //修改大小-----size
//	str.reserve(100);   //修改容量----capacity
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//
//	str.shrink_to_fit();
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//}







// 模板

//类模板
//template <class T>
//class A {
//public:
//	A(int a = 10) :_a(a)
//	{}
//	~A();    //析构函数在类中声明，类外定义
//private:
//	int _a;
//};
//template <class T>
//A<T>::~A()
//{
//	if (_a)
//		_a = 0;
//}



//函数模板
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
//	Add(a, b);            //优先选取已经存在的函数
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



//函数模板

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
//	//隐式实例化
//	Swap(a, b);
//	Swap(c, d);
//	Swap(e, f);           //通过反汇编查看
//
//	return 0;
//}












//内存管理

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
//	test();  //随机值：malloc 只开辟空间不进行初始化
//	return 0;
//}




//计算给定日期是这一年的第多少天
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
//			_sum = 0;    //重置
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
////静态成员在类外初始化
//int Solution::_sum = 0;
//int Solution::_i = 1;