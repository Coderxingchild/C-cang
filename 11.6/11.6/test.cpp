#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


//�ַ������,�����Ǹ�����
//////////�Ӹ�λ���ֿ�ʼ��ӣ������λ 1 �� 0 

//string addstring(string num1, string num2)
//{
//	int len1 = num1.size();
//	int len2 = num2.size();
//	string ret;  //������
//	int step = 0;  //�����λ
//	int curSum = 0;   //�����
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
//		/*ret.insert(0, 1, curSum + '0');*/   //ͷ��
//
//		ret += curSum + '0'; //β��
//		len1--;
//		len2--;
//	}
//	if (step == 1)       //�������λ�Ľ�λ
//		//ret.insert(0, 1, '1');
//		ret += '1';
//
//	//β��---------�������
//	reverse(ret.begin(), ret.end());
//
//	return ret;
//}






//�жϻ���

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
//			ch += 32;   //תΪСд��ĸ
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




//�ַ��������һ�����ʳ���

//int main()
//{
//	string str;
//	getline(cin, str);    //�������� 
//	size_t pos = str.rfind(' ');      //������ҿո�λ��
//	if (pos == string::npos) {
//		return str.size();
//	}
//	cout << str.size() - pos - 1 << endl;
//
//	return 0;
//}


//���ַ����е�һ��ֻ����һ�ε��ַ��������ڷ���-1,c���ڷ�������λ��
//
//int first(string s) {
//	int counts[26] = { 0 };           //��¼ 26 ����ĸ
//	for (const auto&ch : s) {
//		counts[ch - 'a']++;           //��¼��ĸ���ִ���
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


//������ת��ĸ-----------ǰ����ĸ����

//bool isAlp(const char& ch)  //�ж��Ƿ�Ϊ��ĸ
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
//			++start;           //�ж��Ƿ�Ϊ��ĸ
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




//�ַ���ת����

//int Getstring(const string& s)
//{
//	int num = 0, i = 0;
//	if (s.empty()) {
//		return 0;
//	}
//	int flag = 1; // ����ȷ�����ֵ�����
//	if (s[i] == '-') {     //�ж�������
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