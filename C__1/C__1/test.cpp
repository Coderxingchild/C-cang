#include<iostream>
using namespace std;


//C ����
//struct Student {
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//	//�ṹ���еĺ���
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



//C++ ���� --------------- ��Ķ��� ��ʽһ
//class Student {
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//public:
//	//�ṹ���еĺ���
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
//	Student s;     // s ��һ�������ѧ��
//	// s.InitStudent("Peter",'M',18);
//	return 0;
//}



//#pragma warning(disable:4996)
//class A {                     // ռ 4 �ֽ�
//public:
//	void TestA() 
//	{
//		int a ;
//	}
//private:
//	int _a;
//};
//class B {  // �޳�Ա������ -------- ռ 1 �ֽ�
//public:
//	void TestB() 
//	{}
//};
//class C {
//	//����---------- ռ 1 �ֽ�
//};
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//	return 0;
//}


//struct D {     // �սṹ���СΪ 1
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
//	char d;    //1  --> 24 (��������Ϊ 8 )
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
//{// ��ʼ��
//	strcpy(ps->_name, name);
//	strcpy(ps->_gender, gender);
//	ps -> _age = age;
//}
//void PrintStudent(Student*ps)
//{// ��ӡ
//	printf("%s-%s-%d\n", ps->_name, ps->_gender, ps->_age);
//
//}
//int mian()
//{
//	struct Student s1, s2, s3;
//	InitStudent(&s1, "Peter", "��", 18);
//	InitStudent(&s2, "David", "��", 19);
//	InitStudent(&s3, "Lily", "Ů", 18);
//
//	PrintStudent(&s1);
//	PrintStudent(&s2);
//	PrintStudent(&s3);
//	return 0;
//}



