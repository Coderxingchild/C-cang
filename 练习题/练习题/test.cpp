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
//ʵ�������ַ��������
//int Add(string num1, string num2)
//{
//	int len1 = num1.size() - 1;
//	int len2 = num2.size() - 1;   //ָ���λ����
//	int step = 0;//��λ
//	int curSum = 0;
//	string ret;
//
//	while (len1 >= 0 || len2 >= 0) {
//		curSum = step;     //�ۼ���һ������Ľ�λ
//		if (len1 >= 0)
//			curSum += num1[len1] - '0';
//		if (len2 >= 0)
//			curSum += num2[len2] = '0';
//
//		if (curSum > 9) {
//			step = 1;
//			curSum -= 10;  //���ڽ�λ
//		}
//		else step = 0;
//	}
//	ret.insert(0, 1, curSum);  //ͷ�壬���浱ǰλ������
//	 //ret += curSum + '0';   //β��
//	len1--;
//	len2--;
//	if (step == 1) {   //������λ�н�λ-----ͷ��
//		ret.insert(0, 1, '1');
//		//ret+='1';    //β��
//	}
//	cout << ret << endl;
//	//reverse(ret.begin(),ret.end());      //������β�巨��Ҫ����
//}


//���ַ�������Ч�ַ��������������ո�
//int main()
//{
//	string s;
//	getline(cin, s);
//	size_t pos = s.rfind(' ');    // ������ҿո�
//	if (pos != string::npos) {
//		cout << s.size() << endl;
//	}else
//	cout << s.rfind - pos - 1 << endl;
//	return 0;
//}




//��ֻ����һ�ε��ַ�
//int first(string s)
//{
//	int counts[26] = { 0 };
//	for (const auto& ch : s) {   //ͳ�Ƹ���
//		counts[ch - 'a']++;
//	}
//	for (int i = 0; i < s.size(); ++i) {
//		if (counts[s[i] - 'a'] == 1) {   //Ѱ��ֻ����һ�ε��ַ�
//			cout << s[i] << endl;
//		}
//		return -1;
//	}
//}



//�����ַ������ַ�תΪ����

//int zhuanzheng(const string str)
//{
//	if (str.empty()) {
//		return 0;           //���ַ�����0 
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
//	//cin ����������пո���ַ���
//	string s;
//	cin >> s;
//	operator>>(cin, s);     //����,���ʽ����
//
//	getline(cin, s);        //Ĭ�ϰ�������
//	getline(cin, s, ',');    // ������Ϊ�ָ���
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
//	//�ȽϹ��򣺴�ǰ������ÿһ���ַ��� ASCII ֵ���бȽ�
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


//��Χ for 
//void test()
//{
//	string s = "1234";
//	for (char ch : s) {
//		//for(auto& ch:s)  ----------- �ɶ���д
//		cout << ch << " ";
//		ch = 'a';   //�����޸�����
//	}
//	cout << endl;
//
//	/////////////////////////////////////////////
//
//	string s = "1234";
//	for (char& ch : s) {
//		//for(const char& ch:s)
//		//for(const auto& ch:s)  ----------- ֻ��
//		cout << ch << " ";
//		ch = 'a';   //���޸����� ------- ��������
//	}
//	cout << endl;
//
//}




//��������ʹ��

//void printString(const string& str)
//{
//	string::const_reverse_iterator crit = str.crbegin();
//	while (crit != str.crend) {
//		cout << *crit << " ";      //ֻ��
//		++crit;
//	}
//	cout << endl;
//}


//void test()
//{
//	string s = "12345";
//	string::reverse_iterator rit = s.rbegin();    // rbegin ָ�����һ��Ԫ��
//	while (rit != s.rend) {
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	//string s = "1234";
//	//const string s1 = "4567";
//	//string::const_iterator cit = s.cbegin();
//	//string::const_iterator cit1 = s1.cbegin();  //ֻ�� 
//}



//void test()
//{
//	string s = "1234";
//	for (int i = 0; i < s.size(); ++i) {    //��ӡÿһ��Ԫ��
//		cout << s[i] << " ";
//	}
//	cout << endl;
//
//
//	//ֻ������
//	cout << "const_iterator:" << endl;
//	string::const_iterator cit = s.cbegin();
//	while (cit != s.cend) {
//		cout << *cit << " ";
//	}
//	cout << endl;
//
//
//	//�ɶ���д����
//	cout << "iterator: " << endl;  //��������ʹ��
//	string::iterator it = s.begin();
//	while (it != s.end)
//	{
//		cout << *it << " ";   // ��ӡԪ��---������������
//		//���õ��������޸�����  ��
//		//*it = 'a';   //���ȫΪ a
//		++it;   //����������
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
//	// s1.at(2) = '2';   //�������޸�
//
//	// s.at(5) = 'c';  //Խ��----����
//
//	//////////////////////////////////////////////////////////////
//
//	//string str = "1234";
//	//cout << str << endl;
//
//	//str.front() = 'a';        //�޸ĵ�һ���ַ�
//	//cout << str << endl;
//
//	//str.back() = 'b';          //�޸����һ���ַ�
//	//cout << str << endl;
//}





//void test()
//{
//	string str = "1234";
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//
//	str.resize(100);   //�޸Ĵ�С-----size
//	str.reserve(100);   //�޸�����----capacity
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//
//	str.shrink_to_fit();
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//}







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