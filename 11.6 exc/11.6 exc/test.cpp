#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
#pragma warning(disable:4996)


//ģ��ʵ�� String
class String {
public:
	//���캯��
	String(const char* str = "")
	{
		_size = strlen(str);
		_capacity = _size;
		_ptr = new char[_size + 1];
		strcpy(_ptr, str);
	}

	//��������
	/*String(const String& str) 
		:_ptr(new char[_capacity + 1]), _size(str._size), _capacity(str._capacity)
	{
		strcpy(_ptr, str._ptr);
	}*/
	//�ִ�д��
	String(const String& str) 
		:_ptr(nullptr)   //���븳Ϊ��ֵ��������������
		,_size(0)
		,_capacity(0)
	{
		String tmp(str._ptr);
		Swap(tmp);
	}

	//��ֵ
	//�ִ�д��
	String& operator=(String str)      //��ֵ�����ȵ��ÿ���������� str �Ŀ���
	{
		Swap(str);
		return *this;
	}
	//��ͳд��
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

	//����
	~String()
	{
		if (_ptr) {
			delete[] _ptr;
			_ptr = nullptr;
			_size = _capacity = 0;
		}
	}
	//β��
	void push_back(const char& ch)
	{
		if (_size == _capacity) {  //����
			size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
			reserve(newCapacity);
		}
		_ptr[_size++] = ch;        //β��
		_ptr[_size] = '\0';
	}
	void reserve(size_t n)   //����
	{
		if (n > _capacity) {
			char* tmp = new char[n + 1];
			//strcpy(tmp,_ptr);          //���� \0 �����
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
	char& operator[](size_t pos)    //�ɶ���д
	{
		assert(pos < _size);  //�ж�λ�úϷ���
		return _ptr[pos];
	}
	const char& operator[](size_t pos)const   //�ɶ�����д
	{
		assert(pos < _size);  //�ж�λ�úϷ���
		return _ptr[pos];
	}

	typedef char* iterator;
	typedef const char* const_iterator;

	iterator begin()       //�ɶ���д
	{
		return _ptr;
	}
	iterator end()     //���һ��Ԫ�ص���һ��λ��
	{
		return _ptr + _size;
	}
	const_iterator begin() const    //ֻ��
	{
		return _ptr;
	}
	const_iterator end() const
	{
		return _ptr + _size;
	}


	//1.n<= _size ֻ�޸�size
	//2._size<n<= _capacity ��ֵ ch---> [_size,_capacity] ���޸�_size
	//3.n>_capacity ������

	void resize(size_t sz, char ch = '\0')   //�޸���Ч�ռ�
	{
		if (sz > _capacity) {
			reserve(sz);
		}
		if (sz > _size) {
			memset(_ptr + _size, ch, sz - _size);
		}
		_size = sz;          //�ռ��С��_size ��Ҫ�޸ģ�_capacity ������
		_ptr[_size] = '\0';
	}
	void Append(const char* str) //β��һ���ַ���
	{
		int len = strlen(str);
		if (_size+len > _capacity) {
		//���ǿռ��Ƿ��㹻�������ַ���
			reserve(_size + len);
		}
		//β��
		strcpy(_ptr + _size, str);
		_size += len;
	}
	String& operator+=(char ch) //β��һ���ַ�
	{
		push_back(ch);
		/*if (_size >= _capacity)
		{
			reserve(_size + 1);
		}
		_ptr[_size++] = ch;*/
		return *this;
	}
	String& operator+=(char* str)  //β��һ���ַ���
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
		Append(str._ptr);        //����һ�������ַ���
		return *this;
	}

	//������λ�ò���һ���ַ�------------�Ӻ���ǰ�ƶ�
	void insert(size_t pos, const char& ch)
	{
		assert(pos <= _size);   //�жϲ���λ�õĺϷ���
		if (_size == _capacity)
		{
			size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
			reserve(newCapacity);
		}
		//�ƶ�Ԫ�أ���pos λ�ÿճ�
		size_t end = _size;       //�޷�����
		while (end > pos ) {
			_ptr[end] = _ptr[end - 1];
			--end;
		}
		_ptr[pos] = ch;
		_ptr[++_size] = '\0';
	}
	//����λ�ò����ַ���
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
		// һ��һ����Ӧλ�ò���
		memcpy(_ptr + pos, str, len * sizeof(char));   // '0'Ҳ������ȥ��
		_size += len;
	}
	//ɾ��---------------��ǰ����ƶ�
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

	//����ĳ���ַ�
	size_t find(const char& ch, size_t pos = 0)
	{
		for (size_t i = pos; i < _size; ++i) {
			if (_ptr[i] == ch)
				return i;
		}
		return npos;        //δ�ҵ����� npos
	}
	//�����ַ���
	size_t find(const char* str, size_t pos = 0)
	{
		char* start = strstr(_ptr + pos, str);
		if (start) {
			return	start - _ptr;
		}
		return npos;
	}
	//�������


private:
	char* _ptr;
	size_t _size;
	size_t _capacity;
	//��̬��Ա�����ⶨ��
	static const size_t npos;
};

const size_t String::npos = -1;

//�������

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
//	String s2(s1);      //��������
//	s1 = s2;             // ��ֵ
//}

//void test()
//{
//	String s = "1232";
//	for (size_t i = 0; i < s.size(); i++) {
//		cout << s[i] << " ";
//		//s[i] = 'a';     //�޸�����
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
//	//������ʽ
//	//1.for+operator[]
//	//2.iterator ������
//	//3.��Χfor ---------- ʵ���ϵ��� ������ʵ��
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
//	//���죬ȫȱʡ
//	String(const char* str = "")
//	{
//		_size = strlen(str);
//		_capacity = _size;
//		_ptr = new char[_size + 1];    // ' \0 '
//		strcpy(_ptr, str);
//	}
//
//	//��������------------�ȿ��ٿռ�
//	/*String(const String& str) :_ptr(new char[str._capacity + 1]), _size(str._size), _capacity(str._capacity)
//	{
//		strcpy(_ptr, str._ptr);
//	}*/
//
//	//�ִ�д��
//	String(const String& str) :_ptr(nullptr),_size(0),_capacity(0)
//	{
//		String tmp(str._ptr);
//		Swap(tmp);
//
//	}
//
//	//��ֵ
//	//�ִ�д��
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
//	//����
//	~String()
//	{
//		if (_ptr) {
//			delete[] _ptr;
//			_ptr = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//	//���뵥���ַ����ж�����
//	void push_back(const char& ch)
//	{
//		if (_size == _capacity) {
//		//����
//			size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
//			reserve(newCapacity);
//		}
//		//�����ַ�
//		_ptr[_size++] = ch;
//		_ptr[_size] = '\0';
//	}
//	void reserve(size_t n)     //�޸�����
//	{
//		if (n >= _capacity) {
//			//�����¿ռ�
//			char* tmp = new char[n + 1];
//			strcpy(tmp, _ptr);    //����ԭʼ����
//			delete[] _ptr;          //�ͷ�ԭ�ռ�
//			_ptr = tmp;             //�޸�ָ��
//			_capacity = n;
//		}
//	}
//	size_t size()
//	{
//		return _size;
//	}
//	char& operator[](size_t pos)    //�ɶ���д
//	{
//		//�ж�λ���Ƿ�Ϸ�
//		assert(pos < _size);
//		return _ptr[pos];
//	}
//	const char& operator[](size_t pos)const  //�ɶ�
//	{
//		//�ж�λ���Ƿ�Ϸ�
//		assert(pos < _size);
//		return _ptr[pos];
//	}
//private:
//	char* _ptr;
//	size_t _size;
//	size_t _capacity;
//};
//
////����
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
//	//��ʽ���忽�����죬�����������������+������Դ
//	String(const String& str):_ptr(new char[strlen(str._ptr)+1]) {
//		strcpy(_ptr, str._ptr);
//	}
//
//	//���
//	//String& operator=(const String& str) {
//	//	if (this != &str) {
//	//		char* tmp = new char[strlen(str._ptr) + 1];
//	//		strcpy(tmp, str._ptr);    //������Դ
//	//		delete[] _ptr;             //ɾ��ԭ�пռ�
//	//		_ptr = tmp;           //ָ���¿ռ�
//	//	}
//	//	return *this;
//	//}
//
//
//	//�ִ�д��
//	/*String& operator=(String str) {
//		swap(_ptr, str._ptr);
//		return *this;
//	}*/
//
//private:
//	char* _ptr;
//};
//
