#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


//字符串相加,两个非负整数
//////////从个位数字开始相加，保存进位 1 或 0 

//string addstring(string num1, string num2)
//{
//	int len1 = num1.size();
//	int len2 = num2.size();
//	string ret;  //保存结果
//	int step = 0;  //保存进位
//	int curSum = 0;   //保存和
//	while (len1 >= 0 || len2 >= 0) {
//		curSum = step;
//		if (len1 >= 0)
//			curSum += num1[len1] - '0';
//		if (len2 >= 0)
//			curSum += num2[len2] - '0';
//		if (curSum > 9) {
//			step = 1;
//			curSum -= 10;
//		}
//		else
//			step = 0;
//		/*ret.insert(0, 1, curSum + '0');*/   //头插
//
//		ret += curSum + '0'; //尾插
//		len1--;
//		len2--;
//	}
//	if (step == 1)       //考虑最高位的进位
//		//ret.insert(0, 1, '1');
//		ret += '1';
//
//	//尾插---------结果逆置
//	reverse(ret.begin(), ret.end());
//
//	return ret;
//}






//判断回文

//bool isNum(const char& ch)
//{
//	return (ch >= '0' && ch <= '9') || (ch >= 'a'&& ch <= 'z') || (ch >= 'A'&&ch <= 'Z');
//}
//bool ishuiwen(string s) 
//{
//	if (s.empty())
//		return true;
//	for (auto& ch : s) {
//		if (ch >= 'A'&&ch <= 'Z')
//			ch += 32;   //转为小写字母
//	}
//	int start = 0;
//	int end = s.size() - 1;
//	while (start < end) {
//		while (start < end && !isNum(s[start]))
//			++start;
//		while (start < end && !isNum(s[end]))
//			--end;
//		++start;
//		--end;
//	}
//	return true;
//}




//字符串里最后一个单词长度

//int main()
//{
//	string str;
//	getline(cin, str);    //按行输入 
//	size_t pos = str.rfind(' ');      //反向查找空格位置
//	if (pos == string::npos) {
//		return str.size();
//	}
//	cout << str.size() - pos - 1 << endl;
//
//	return 0;
//}


//找字符串中第一个只出现一次的字符，不存在返回-1,c存在返回所在位置
//
//int first(string s) {
//	int counts[26] = { 0 };           //记录 26 个字母
//	for (const auto&ch : s) {
//		counts[ch - 'a']++;           //记录字母出现次数
//	}
//	/*string::iterator it = s.begin();
//	while (it != s.end()) {
//		counts[*it = 'a']++;
//		++it;
//	}*/
//	for (int i = 0; i < s.size(); ++i) {
//		if (counts[s[i] - 'a'] == 1)
//			return i;
//	}
//}
//int main()
//{
//	string s = "sabdkjvbcyafsaSS";
//	cout << first(s) << endl;
//	return 0;
//}


//仅仅反转字母-----------前后字母互换

//bool isAlp(const char& ch)  //判断是否为字母
//{
//	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
//}
//string reverseonlyletters(string S)
//{
//	if (S.empty()) {
//		return S;
//	}
//	int start = 0;
//	int end = S.size() - 1;
//	while (start < end) {
//		while (start < end && !isAlp(S[start])) {
//			++start;           //判断是否为字母
//		}
//		while (start < end && !isAlp(S[end])) {
//			--end;
//		}
//		swap(S[start], S[end]);
//		++start;
//		--end;
//	}
//	return S;
//}
//int main()
//{
//	string S = "12afbfh--dsvnnk";
//	cout << reverseonlyletters(S) << endl;
//	return 0;
//}




//字符串转整型

//int Getstring(const string& s)
//{
//	int num = 0, i = 0;
//	if (s.empty()) {
//		return 0;
//	}
//	int flag = 1; // 用来确定数字的正负
//	if (s[i] == '-') {     //判断正负数
//		flag = -1;
//		++i;
//	}
//	else if (s[i] == '+') {
//		++i;
//	}
//	for (; i < s.size(); ++i) {
//		if (s[i] >= '0' && s[i] <= '9') {
//			num = num * 10 + flag * (s[i] - '0');
//		}
//		else {
//			num = 0;
//			break;
//		}
//	}
//	return num;
//}
//int main()
//{
//	string s = "123456";
//	int m = Getstring(s);
//	cout << m << endl;
//	return 0;
//}