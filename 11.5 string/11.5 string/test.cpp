#include<iostream>
#include<string>

using namespace std;


//cin:不能读取带有空格之后的字符串
//getline:默认输入一行内容，中间可以有空格


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
	//迭代器
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
		//cin 不能有空格
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
	size_t _size;          //有效长度
	size_t _capacity;       //容量
};







//void test()
//{
//	string s="12345678";
//	s.reserve(100);     //修改容量
//	cout << s.size() << endl;                 //8
//	cout << s.capacity() << endl;          //111
//
//	s.reserve(50);       //修改后容量大小如果小于底层大小（100），则空间容量大小不变
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
//	string& rs2 = s1 + s2;  //效率低
//
//}
//int main()
//{
//	test();
//	return 0;
//}



//npos 最大的整数值，有符号：-1；无符号：4G


//void test()
//{
//          //按照ASCII值进行比较
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
//	   //substr 字符串构建
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

