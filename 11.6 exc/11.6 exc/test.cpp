#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
#pragma warning(disable:4996)


//模拟实现 String
class String {
public:
	//构造函数
	String(const char* str = "")
	{
		_size = strlen(str);
		_capacity = _size;
		_ptr = new char[_size + 1];
		strcpy(_ptr, str);
	}

	//拷贝构造
	/*String(const String& str) 
		:_ptr(new char[_capacity + 1]), _size(str._size), _capacity(str._capacity)
	{
		strcpy(_ptr, str._ptr);
	}*/
	//现代写法
	String(const String& str) 
		:_ptr(nullptr)   //必须赋为空值，否则析构出错
		,_size(0)
		,_capacity(0)
	{
		String tmp(str._ptr);
		Swap(tmp);
	}

	//赋值
	//现代写法
	String& operator=(String str)      //传值，需先调用拷贝构造完成 str 的拷贝
	{
		Swap(str);
		return *this;
	}
	//传统写法
	/*String& operator=(const String& str)
	{
		if (this != &str) {
			char *tmp = new char[str._capacity + 1];
			strcpy(tmp, str._ptr);
			delete[] _ptr;
			_ptr = tmp;
		}
		return *this;
	}*/
	
	void Swap(String& str)
	{
		swap(_ptr, str._ptr);
		swap(_size, str._size);
		swap(_capacity, str._capacity);
	}

	//析构
	~String()
	{
		if (_ptr) {
			delete[] _ptr;
			_ptr = nullptr;
			_size = _capacity = 0;
		}
	}
	//尾插
	void push_back(const char& ch)
	{
		if (_size == _capacity) {  //判满
			size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
			reserve(newCapacity);
		}
		_ptr[_size++] = ch;        //尾插
		_ptr[_size] = '\0';
	}
	void reserve(size_t n)   //增容
	{
		if (n > _capacity) {
			char* tmp = new char[n + 1];
			//strcpy(tmp,_ptr);          //遇到 \0 会结束
			for (int i = 0; i <= _size; ++i) {
				tmp[i] = _ptr[i];
			}
			delete[] _ptr;
			_ptr = tmp;
			_capacity = n;
		}
	}
	size_t size()const
	{
		return _size;
	}
	char& operator[](size_t pos)    //可读可写
	{
		assert(pos < _size);  //判断位置合法性
		return _ptr[pos];
	}
	const char& operator[](size_t pos)const   //可读不可写
	{
		assert(pos < _size);  //判断位置合法性
		return _ptr[pos];
	}

	typedef char* iterator;
	typedef const char* const_iterator;

	iterator begin()       //可读可写
	{
		return _ptr;
	}
	iterator end()     //最后一个元素的下一个位置
	{
		return _ptr + _size;
	}
	const_iterator begin() const    //只读
	{
		return _ptr;
	}
	const_iterator end() const
	{
		return _ptr + _size;
	}


	//1.n<= _size 只修改size
	//2._size<n<= _capacity 赋值 ch---> [_size,_capacity] ，修改_size
	//3.n>_capacity ：增容

	void resize(size_t sz, char ch = '\0')   //修改有效空间
	{
		if (sz > _capacity) {
			reserve(sz);
		}
		if (sz > _size) {
			memset(_ptr + _size, ch, sz - _size);
		}
		_size = sz;          //空间变小，_size 需要修改，_capacity 不更改
		_ptr[_size] = '\0';
	}
	void Append(const char* str) //尾插一个字符串
	{
		int len = strlen(str);
		if (_size+len > _capacity) {
		//考虑空间是否足够放下新字符串
			reserve(_size + len);
		}
		//尾插
		strcpy(_ptr + _size, str);
		_size += len;
	}
	String& operator+=(char ch) //尾插一个字符
	{
		push_back(ch);
		/*if (_size >= _capacity)
		{
			reserve(_size + 1);
		}
		_ptr[_size++] = ch;*/
		return *this;
	}
	String& operator+=(char* str)  //尾插一个字符串
	{
		Append(str);
		/*int len = strlen(str);
		if (_size + len > _capacity) {
			reserve(_size + len);
		}
		strcpy(_ptr + _size, str);
		_size += len;*/
		return *this;
	}
	String& operator+=(const String& str)
	{
		Append(str._ptr);        //加上一个自身字符串
		return *this;
	}

	//在任意位置插入一个字符------------从后向前移动
	void insert(size_t pos, const char& ch)
	{
		assert(pos <= _size);   //判断插入位置的合法性
		if (_size == _capacity)
		{
			size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
			reserve(newCapacity);
		}
		//移动元素，将pos 位置空出
		size_t end = _size;       //无符号数
		while (end > pos ) {
			_ptr[end] = _ptr[end - 1];
			--end;
		}
		_ptr[pos] = ch;
		_ptr[++_size] = '\0';
	}
	//任意位置插入字符串
	void insert(size_t pos, const char*str)
	{
		assert(pos <= _size);
		int len = strlen(str);
		if (_size + len > _capacity) {
			reserve(_size + len);
		}
		size_t end = _size + len;
		while (end > pos + len - 1)
		{
			_ptr[end] = _ptr[end - len];
			--end;
		}
		// 一个一个对应位置插入
		memcpy(_ptr + pos, str, len * sizeof(char));   // '0'也拷贝进去了
		_size += len;
	}
	//删除---------------从前向后移动
	void erase(size_t pos, size_t len)
	{
		assert(pos < _size);
		if (pos + len >= _size) {
			_size = pos;
			_ptr[_size] = '\0';
			return;
		}
		size_t start = pos + len;
		while (start < _size) {
			/*_ptr[start - len] = _ptr[start];
			++start;*/

			_ptr[pos++] = _ptr[start++];
		}
		_size -= len;
		_ptr[_size] = '\0';
	}

	//查找某个字符
	size_t find(const char& ch, size_t pos = 0)
	{
		for (size_t i = pos; i < _size; ++i) {
			if (_ptr[i] == ch)
				return i;
		}
		return npos;        //未找到返回 npos
	}
	//查找字符串
	size_t find(const char* str, size_t pos = 0)
	{
		char* start = strstr(_ptr + pos, str);
		if (start) {
			return	start - _ptr;
		}
		return npos;
	}
	//输入输出


private:
	char* _ptr;
	size_t _size;
	size_t _capacity;
	//静态成员在类外定义
	static const size_t npos;
};

const size_t String::npos = -1;

//输入输出

ostream& operator<<(ostream& _cout, const String& str)
{
	for (const auto& ch : str) {
		cout << ch << " ";
	}
	return _cout;
	
}
istream& operator>>(istream& _cin, String& str)
{
	char ch;
	while (ch = getchar() != EOF) {
		if (ch == '\n')
			return _cin;
		str += ch;
	}
	return _cin;
}



//void test()
//{
//	String s = "13214";
//	String s1 = "asbcd";
//	String s2(s1);      //拷贝构造
//	s1 = s2;             // 赋值
//}

//void test()
//{
//	String s = "1232";
//	for (size_t i = 0; i < s.size(); i++) {
//		cout << s[i] << " ";
//		//s[i] = 'a';     //修改内容
//		char &ch = s[i];
//		ch = 'a';
//	}
//	cout << endl;
//}

//void test()
//{
//	String s = "12345";
//	String::iterator it = s.begin();
//	while (it != s.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}

//void test()
//{
//	//遍历方式
//	//1.for+operator[]
//	//2.iterator 迭代器
//	//3.范围for ---------- 实际上调用 迭代器实现
//
//	String s = "2131435";
//	for (const auto& ch : s) {
//		cout << ch << " ";
//	}
//	cout << endl;
//}

//void test()
//{
//	String str = "24213";
//	str += '7';
//	str.operator+=('4');
//}

void test()
{}

int main()
{
	test();
	return 0;
}



//class String {
//public:
//	//构造，全缺省
//	String(const char* str = "")
//	{
//		_size = strlen(str);
//		_capacity = _size;
//		_ptr = new char[_size + 1];    // ' \0 '
//		strcpy(_ptr, str);
//	}
//
//	//拷贝构造------------先开辟空间
//	/*String(const String& str) :_ptr(new char[str._capacity + 1]), _size(str._size), _capacity(str._capacity)
//	{
//		strcpy(_ptr, str._ptr);
//	}*/
//
//	//现代写法
//	String(const String& str) :_ptr(nullptr),_size(0),_capacity(0)
//	{
//		String tmp(str._ptr);
//		Swap(tmp);
//
//	}
//
//	//赋值
//	//现代写法
//	/*String& operator=(String str)
//	{
//		Swap(str);
//		return *this;
//	}*/
//	String& operator=(const String& str)
//	{
//		if (this != &str) {
//			char* tmp = new char[str._capacity + 1];
//			strcpy(tmp, str._ptr);
//			delete[] _ptr;
//			_ptr = nullptr;
//			_size = str._size;
//			_capacity = str._capacity;
//		}
//		return *this;
//	}
//	void Swap(String& str)
//	{
//		swap(_ptr, str._ptr);
//		swap(_size, str._size);
//		swap(_capacity, str._capacity);
//	}
//
//	//析构
//	~String()
//	{
//		if (_ptr) {
//			delete[] _ptr;
//			_ptr = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//	//插入单个字符，判断容量
//	void push_back(const char& ch)
//	{
//		if (_size == _capacity) {
//		//增容
//			size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
//			reserve(newCapacity);
//		}
//		//插入字符
//		_ptr[_size++] = ch;
//		_ptr[_size] = '\0';
//	}
//	void reserve(size_t n)     //修改容量
//	{
//		if (n >= _capacity) {
//			//开辟新空间
//			char* tmp = new char[n + 1];
//			strcpy(tmp, _ptr);    //拷贝原始内容
//			delete[] _ptr;          //释放原空间
//			_ptr = tmp;             //修改指向
//			_capacity = n;
//		}
//	}
//	size_t size()
//	{
//		return _size;
//	}
//	char& operator[](size_t pos)    //可读可写
//	{
//		//判断位置是否合法
//		assert(pos < _size);
//		return _ptr[pos];
//	}
//	const char& operator[](size_t pos)const  //可读
//	{
//		//判断位置是否合法
//		assert(pos < _size);
//		return _ptr[pos];
//	}
//private:
//	char* _ptr;
//	size_t _size;
//	size_t _capacity;
//};
//
////遍历
//void test()
//{
//	String str = "123214";
//	for (size_t i = 0; i < str.size(); ++i) {
//		cout << str[i] << " ";
//		str[i] = 'a';
//		/*char& rf = str[i];
//		rf = 'a';*/
//	}
//	cout << endl;
//}




//class String {
//public:
//	//显式定义拷贝构造，深拷贝：拷贝对象内容+对象资源
//	String(const String& str):_ptr(new char[strlen(str._ptr)+1]) {
//		strcpy(_ptr, str._ptr);
//	}
//
//	//深拷贝
//	//String& operator=(const String& str) {
//	//	if (this != &str) {
//	//		char* tmp = new char[strlen(str._ptr) + 1];
//	//		strcpy(tmp, str._ptr);    //拷贝资源
//	//		delete[] _ptr;             //删除原有空间
//	//		_ptr = tmp;           //指向新空间
//	//	}
//	//	return *this;
//	//}
//
//
//	//现代写法
//	/*String& operator=(String str) {
//		swap(_ptr, str._ptr);
//		return *this;
//	}*/
//
//private:
//	char* _ptr;
//};
//
