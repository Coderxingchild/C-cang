#include<iostream>
#include<string.h>
using namespace std;

#pragma warning (disable:4996)

//����һ����

//struct Student {
//	//��Ա����
//	void SetStudent(const char*name, const char* gender, int age) 
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//
//
//	//��Ա����
//	char _name[20];
//	char _gender[5];
//	int _age;
//};



class Student {
public:        //���г�Ա������ɼ�
//private   ˽�г�Ա�����ⲻ�ɼ���protected �ܱ�������Ϊ��˽�е�
//����Ȩ�����η�ֻ���Ƴ�Ա������ķ���Ȩ�ޣ������ڲ���Ա֮������໥����
	//��Ա����
	void SetStudent(const char* name, const char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	void PrintfStudent();
	/*void PrintfStudent()
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}*/

private:
	//��Ա����
	char _name[20];
	char _gender[5];
	int _age;
};
void Student::PrintfStudent()   //��Ա��������������֮��������ͨ���������޶��� :: ������ʵ��
{
	cout << _name << " " << _gender << " " << _age << endl;
}
void test()
{
	Student stu;
	stu.SetStudent("����", "��", 29);
	stu.PrintfStudent();
	//cout << stu._gender << endl;          //��Ա������public�¿��Է��ʵ�
}




struct A {
	int _a;
};
class B {
	int _b;
};
void test1()
{
	A Aa;              //struct  Ĭ�ϳ�Ա public
	Aa._a = 10;

	//����һ�������͵ı�����Ϊ���ʵ������ʵ�����ı�����Ϊ��Ķ���
	//B Bb;              //class Ĭ�ϳ�Ա private
	//Bb._b = 20;
}



//����Ĵ�СΪ 1

class C {};
class D {
private:
	int _a;
};
class E {
public:
	int fun(int a, int b) {
		return a + b;
	}
};
class F {
public:
	int fun1(int a, int b)
	{
		return a + b;
	}
private:
	int _a;
};
void test2()
{
	//��ʵ����֮�����Ĵ�С
	//��Ա������ռ����Ŀռ䣺��Ա�������ڴ����
	cout << sizeof(C) << endl;      // 1   ----------  �����СΪ 1
	cout << sizeof(D) << endl;      // 4 
	cout << sizeof(E) << endl;      // 1      ��Ա������ռ����ռ�
	cout << sizeof(F) << endl;      // 4
}


int main()
{
	test();
	test2();
	return 0;
}