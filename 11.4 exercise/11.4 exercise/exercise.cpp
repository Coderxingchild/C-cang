#include<iostream>
#include<string>
using namespace std;








// push_back()  尾插
//pop_back()   尾删

//insert  插入接口
//erase()   删除接口
//assign  赋值
//replace 替换


//void test()
//{
//	string s = "12342354";
//	string s2 = "423";
//	size_t pos = s.find(s2);
//}
//int main()
//{
//	test();
//	return 0;
//}



//void test()
//{
//	string s = "123";
//	string s2 = "abc";
//	s.replace(1, 1, s2);     // 1abc3
//	swap(s, s2);
//	s.swap(s2);
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//void test()
//{
//	string s = "12345";
//	string::const_reverse_iterator cit = s.crbegin();
//	while (cit != s.crend)
//	{
//		//*cit = 'a';   // 只读不可修改
//
//		cout << *cit << endl;
//		++cit;
//	}
//	cout << endl;
//}



//void test()
//{
//	string s ("123");
//	const string s1 = s.c_str();
//	//const char * s1 = s.c_str();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	
//	cout << s << endl;
//    cout << s1 << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}


//void test()
//{
//	string str1;  //创建一个空字符串   ""
//	string str2(str1);       //""
//	string str3("12345");     //12345
//	string str4 = "1234567";     //1234567
//	string str5("12345678", 5);   //12345
//	string str6(10, 'a');           //aaaaaaaaaa
//	string str7(str4, 3, 3);       //456
//	string str8(str5, 2);         //345
//}


//void test()
//{
//	string str1 = "123456";
//	const string str2 = "132354357";
//         //求有效字符的个数
//	cout << str1.size() << endl;
//	cout << str2.size() << endl;
//}


//void test()
//{
//	string str1 = "1234";
//	str1.resize(10);
//	const string str2 = str1.c_str();
//	cout << str1.size() << endl;
//	cout << str1 << "endl" << endl;
//	cout << str2 << endl;
//}



//  string

//void test()
//{
//	string str1 = "13356456";
//	/*str1.resize(20);            */   //扩容
//	cout << str1.size() << endl;
//	cout << str1.capacity() << endl;
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	str1.push_back('b');
//	cout << str1.size() << endl;
//	cout << str1.capacity() << endl;
//
//	str1.resize(4);
//	cout << str1.size() << endl;
//	cout << str1.capacity() << endl;
//}



//void test()
//{
//	//string str = "12345";
//	//int i = 0;
//	//for (; i <= str.size();++i) {
//	//	cout << str[i] << " ";
//	//}
//	//cout << endl;
//
//	//迭代器
//	//string str1 = "12345";
//	//string::iterator it = str1.begin();
//	//while (it != str1.end()) {
//	//	*it = 'a';
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//
//	//const string str2 = "12345";
//	//string::const_iterator it1 = str2.begin();
//	//while (it != str2.end()) {
//	//	// *it = 'a';
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//
//
//	//const string str3 = "12345";
//	//string::const_iterator it3 = str3.cbegin();
//	//while (it3 != str3.cend()) {
//	//	
//	//	//*it = 'a';
//	//	
//	//	cout << *it3 << " ";
//	//	++it3;
//	//}
//	//cout << endl;
//
//
//	//反向迭代器
//	//string str4 = "12345";
//	//string::reverse_iterator it4 = str4.rbegin();
//	//while (it4 != str4.rend()) {
//	//	cout << *it4 << " ";
//	//	++it4;
//	//}
//	//cout << endl;
//
//
//	/*string str = "123456";
//	string::iterator it = str.begin();
//	while (it != str.end()) {
//		cout << *it << " " << endl;
//		++it;
//	}*/
//}



//范围 for

//void test()
//{
//	string s = "13456";
//	for (char ch : s) {
//		cout << ch << " ";
//	}
//	cout << endl;
//}


//void test()
//{
//	string s = "1224235";
//	/*for (const auto& ch : s) {*/
//	for(auto& ch:s){
//		ch = 'a';
//
//		cout << ch << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//模板

//template<typename T1, typename T2>
//T1 Add(const T1& a, const T2& b)
//{
//	return a + b;
//}
//template<typename T1>
//T1 Add(const T1& a ,const T1& b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 2, b = 5;
//	double c = 2.5;
//	Add(a, b);
//	Add(a, c);
//
//	Add<int>(a, c);       //显式实例化
//	Add<double>(a, c);
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//template<typename T1>
//void Swap(T1& a, T1& b)
//{
//	T1 tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	double c = 2.0, d = 3.5;
//	char e = 'e', f = 'f';
//
//	Swap(a, b);
//	Swap(c, d);
//	Swap(e, f);
//	return 0;
//}