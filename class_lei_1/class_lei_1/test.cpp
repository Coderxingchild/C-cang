#include<iostream>
#include<string.h>
using namespace std;

#pragma warning (disable:4996)

//定义一个类

//struct Student {
//	//成员函数
//	void SetStudent(const char*name, const char* gender, int age) 
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//
//
//	//成员变量
//	char _name[20];
//	char _gender[5];
//	int _age;
//};



class Student {
public:        //公有成员在类外可见
//private   私有成员在类外不可见，protected 受保护可认为是私有的
//访问权限修饰符只限制成员在类外的访问权限，在类内部成员之间可以相互访问
	//成员函数
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
	//成员变量
	char _name[20];
	char _gender[5];
	int _age;
};
void Student::PrintfStudent()   //成员函数在类内声明之后，在类外通过作用域限定符 :: 来定义实现
{
	cout << _name << " " << _gender << " " << _age << endl;
}
void test()
{
	Student stu;
	stu.SetStudent("李四", "男", 29);
	stu.PrintfStudent();
	//cout << stu._gender << endl;          //成员变量在public下可以访问到
}




struct A {
	int _a;
};
class B {
	int _b;
};
void test1()
{
	A Aa;              //struct  默认成员 public
	Aa._a = 10;

	//定义一个类类型的变量称为类的实例化，实例化的变量称为类的对象
	//B Bb;              //class 默认成员 private
	//Bb._b = 20;
}



//空类的大小为 1

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
	//类实例化之后对象的大小
	//成员函数不占对象的空间：成员函数放在代码段
	cout << sizeof(C) << endl;      // 1   ----------  空类大小为 1
	cout << sizeof(D) << endl;      // 4 
	cout << sizeof(E) << endl;      // 1      成员函数不占对象空间
	cout << sizeof(F) << endl;      // 4
}


int main()
{
	test();
	test2();
	return 0;
}