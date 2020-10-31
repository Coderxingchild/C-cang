#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class String {
public:
	String() :_ptr(new char[1])
	{
		*_ptr = '\0';
	}
	//String(char* ptr) :_ptr(new char [strlen(ptr)+1])
	//{
	//	strcpy(_ptr, ptr);
	//}

	/*String(char* ptr = "") 
		:_ptr(new char[strlen(ptr) + 1])
	{
		strcpy(_ptr, ptr);
	}*/

	String(const String& str) :_ptr(new char[strlen(str._ptr) + 1])
	{
		strcpy(_ptr, str._ptr);
	}
	~String()
	{
		if (_ptr) {
			delete[] _ptr;
			_ptr = nullptr;
		}
	}

	//深拷贝

	/*String(const String& str):_ptr(nullptr)
	{
		String tmp(str._ptr);
		swap(_ptr, tmp._ptr);
	}*/

	String& operator=(const String& str) 
	{
		if (this != &str) {         //非自身拷贝
			char* tmp = new char[strlen(str._ptr) + 1];
			strcpy(tmp, str._ptr);       //拷贝
			delete[] _ptr;              //释放原空间
			_ptr = tmp;                //修改指向
		}
	}
	const char* c_str() const
	{
		return _ptr;
	}
private:
	char* _ptr;
};