#include<iostream>
using namespace std;


//C 语言
//struct Student {
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//	//结构体中的函数
//	void InitStudent(char name[], char gender[], int age) {
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudent()
//	{
//		cout << _name << "-" << _gender << "-" << _age << endl;
//	}
//	void SetAge(int age)
//	{
//		_age = age;
//	}
//};
//int main()
//{
//	return 0;
//}



//C++ 语言 --------------- 类的定义 方式一
class Student {
private:
	char _name[20];
	char _gender[3];
	int _age;

public:
	//结构体中的函数
	void InitStudent(char name[], char gender[], int age) {
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	void PrintStudent()
	{
		cout << _name << "-" << _gender << "-" << _age << endl;
	}
	void SetAge(int age)
	{
		_age = age;
	}
};
 
int main()
{
	Student s;     // s 是一个具体的学生
	// s.InitStudent("Peter",'M',18);
	return 0;
}
