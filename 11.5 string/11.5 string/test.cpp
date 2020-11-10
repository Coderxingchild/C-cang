#include<iostream>
#include<string>

using namespace std;


//cin:���ܶ�ȡ���пո�֮����ַ���
//getline:Ĭ������һ�����ݣ��м�����пո�


class string {
public:
	typedef char* iterator;

	string(const char*ptr = "") {
		_size = strlen(ptr);
		_capacity = _size;
		_ptr = new char[_capacity + 1];
		strcpy(_ptr, ptr);
	}
	/*string(const string& s) :_ptr(nullptr), _size(0), _capacity(0)
	{
		string tmp(s);
		this->Swap(tmp);
	}*/

	string& operator=(string s)
	{
		//this->Swap(s);
		return *this;
	}
	~string() {
		if (_ptr) {
			delete[]_ptr;
			_ptr = nullptr;
		}
	}
	//������
	iterator begin()
	{
		return _ptr;
	}
	iterator end() {
		return _ptr + _size;
	}
	void Push_back(char c)
	{
		if (_size == _capacity) {
			//Reserve(_capacity * 2);
		}
		_ptr[++_size] = c;
		_ptr[_size] = '\0';
	}
	string& operator+=(char c)
	{
		Push_back(c);
		return*this;
	}
	string& operator+=(const char* str) {
		//append(str);
		return *this;
	}
	istream& operator>>(istream& _cin, string& str)
	{
		//cin �����пո�
		char ch;
		while (cin >> ch) {
			if (ch == '\n')
				return _cin;
			str += ch;
		}
		return _cin;
	}
	ostream& operator<<(ostream& _cout, const string& str)
	{
		/*for (size_t i = 0; i < _size; ++i) {
			_cout << str[i];
		}*/
		for (const auto& ch : str) {
			cout << ch;
		}
		return _cout;
	}

private:
	char* _ptr;
	size_t _size;          //��Ч����
	size_t _capacity;       //����
};







//void test()
//{
//	string s="12345678";
//	s.reserve(100);     //�޸�����
//	cout << s.size() << endl;                 //8
//	cout << s.capacity() << endl;          //111
//
//	s.reserve(50);       //�޸ĺ�������С���С�ڵײ��С��100������ռ�������С����
//	cout << s.size() << endl;            //8
//	cout << s.capacity() << endl;     //111
//}
//int main()
//{
//	test();
//	return 0;
//}




//void test()
//{
//	string s1 = "123";
//	string s2 = "abc";
//	s1 += s2;
//	string &rs = s1 += s2;
//	string& rs2 = s1 + s2;  //Ч�ʵ�
//
//}
//int main()
//{
//	test();
//	return 0;
//}



//npos ��������ֵ���з��ţ�-1���޷��ţ�4G


//void test()
//{
//          //����ASCIIֵ���бȽ�
//	int ret = strcmp("1", "12");
//	ret = strcmp("234", "92");
//}
//int main()
//{
//	test();
//	return 0;
//}



//void test()
//{
//	   //substr �ַ�������
//
//	string s = "http://www.cplusplus.com/reference/string/string/?kw=string";
//	size_t pos = s.find("://");
//	if (pos != string::npos) {
//		size_t pos2 = s.find("/", pos + 3);
//		if (pos2 != string::npos) {
//			pos += 3;
//			string sub = s.substr(pos, pos2 - pos);
//			cout << sub << endl;
//		}
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//
