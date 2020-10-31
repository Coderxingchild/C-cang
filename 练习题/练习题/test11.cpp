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

	//���

	/*String(const String& str):_ptr(nullptr)
	{
		String tmp(str._ptr);
		swap(_ptr, tmp._ptr);
	}*/

	String& operator=(const String& str) 
	{
		if (this != &str) {         //��������
			char* tmp = new char[strlen(str._ptr) + 1];
			strcpy(tmp, str._ptr);       //����
			delete[] _ptr;              //�ͷ�ԭ�ռ�
			_ptr = tmp;                //�޸�ָ��
		}
	}
	const char* c_str() const
	{
		return _ptr;
	}
private:
	char* _ptr;
};