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
class Student {
private:
	char _name[20];
	char _gender[3];
	int _age;

public:
	//�ṹ���еĺ���
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
	Student s;     // s ��һ�������ѧ��
	// s.InitStudent("Peter",'M',18);
	return 0;
}
