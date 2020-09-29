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
//class Student {
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//public:
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
// 
//int main()
//{
//	Student s;     // s 是一个具体的学生
//	// s.InitStudent("Peter",'M',18);
//	return 0;
//}



//#pragma warning(disable:4996)
//class A {                     // 占 4 字节
//public:
//	void TestA() 
//	{
//		int a ;
//	}
//private:
//	int _a;
//};
//class B {  // 无成员不变量 -------- 占 1 字节
//public:
//	void TestB() 
//	{}
//};
//class C {
//	//空类---------- 占 1 字节
//};
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//	return 0;
//}


//struct D {     // 空结构体大小为 1
//};
//int main()
//{
//	cout << sizeof(D) << endl;
//	return 0;
//}




//struct AA {
//	int a;    //4
//	char b;   //1  -->  8
//	double c;  // 8
//	char d;    //1  --> 24 (最大对齐数为 8 )
//};
//int main()
//{
//	struct AA c;
//	cout << offsetof(AA,c) << endl; //8
//	cout << sizeof(AA) << endl;
//	return 0;
//}



//struct Student
//{
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//void InitStudent(Student* ps, char *name, char*gender, int age)
//{// 初始化
//	strcpy(ps->_name, name);
//	strcpy(ps->_gender, gender);
//	ps -> _age = age;
//}
//void PrintStudent(Student*ps)
//{// 打印
//	printf("%s-%s-%d\n", ps->_name, ps->_gender, ps->_age);
//
//}
//int mian()
//{
//	struct Student s1, s2, s3;
//	InitStudent(&s1, "Peter", "男", 18);
//	InitStudent(&s2, "David", "男", 19);
//	InitStudent(&s3, "Lily", "女", 18);
//
//	PrintStudent(&s1);
//	PrintStudent(&s2);
//	PrintStudent(&s3);
//	return 0;
//}



