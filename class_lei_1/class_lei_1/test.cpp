#include<iostream>
#include<string.h>
using namespace std;

#pragma pack()   //����Ĭ�϶�����

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



//class Student {
//public:        //���г�Ա������ɼ�
////private   ˽�г�Ա�����ⲻ�ɼ���protected �ܱ�������Ϊ��˽�е�
////����Ȩ�����η�ֻ���Ƴ�Ա������ķ���Ȩ�ޣ������ڲ���Ա֮������໥����
//	//��Ա����
//	void SetStudent(const char* name, const char* gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintfStudent();
//	/*void PrintfStudent()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}*/
//
//private:
//	//��Ա����
//	char _name[20];
//	char _gender[5];
//	int _age;
//};
//void Student::PrintfStudent()   //��Ա��������������֮��������ͨ���������޶��� :: ������ʵ��
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//}
//void test()
//{
//	Student stu;
//	stu.SetStudent("����", "��", 29);
//	stu.PrintfStudent();
//	//cout << stu._gender << endl;          //��Ա������public�¿��Է��ʵ�
//}




//struct A {
//	int _a;
//};
//class B {
//	int _b;
//};
//void test1()
//{
//	A Aa;              //struct  Ĭ�ϳ�Ա public
//	Aa._a = 10;
//
//	//����һ�������͵ı�����Ϊ���ʵ������ʵ�����ı�����Ϊ��Ķ���
//	//B Bb;              //class Ĭ�ϳ�Ա private
//	//Bb._b = 20;
//}




////����Ĵ�СΪ 1
//
//class C {};
//class D {
//private:
//	int _a;
//};
//class E {
//public:
//	int fun(int a, int b) {
//		return a + b;
//	}
//};
//class F {
//public:
//	int fun1(int a, int b)
//	{
//		return a + b;
//	}
//private:
//	int _a;
//};
//void test2()
//{
//	//��ʵ����֮�����Ĵ�С
//	//��Ա������ռ����Ŀռ䣺��Ա�������ڴ����
//	cout << sizeof(C) << endl;      // 1   ----------  �����СΪ 1
//	cout << sizeof(D) << endl;      // 4 
//	cout << sizeof(E) << endl;      // 1      ��Ա������ռ����ռ�
//	cout << sizeof(F) << endl;      // 4
//}
//
//
//int main()
//{
//	test();
//	test2();
//	return 0;
//}





//union A {
//	int a;
//	char b;
//};
//void test()
//{
//	A obj;
//	obj.a = 1;
//	if (obj.b)
//		cout << "С��" << endl;      //
//	else
//		cout << "���" << endl;
//}





////ÿ���Ǿ�̬��Ա������Ĭ�ϴ���һ�� this ָ��
////ֻ�����ڳ�Ա������
////��Ϊ�����ĵ�һ���β�
////this ָ��ǰ���ô˺����Ķ���
//// this ����  * const this



////���캯������ʼ���������ݣ����Ǵ�������
////��������ʱ���������Զ����ù��캯����������ʽ����
////������ʽ���幹����������Զ������޲ι�����������޲ι���
////Ĭ�Ϲ���ֻ��һ�����޲ι���/ȫȱʡ����
////�����Զ����Ա�����캯�����Զ������Զ����Ա��Ĭ�Ϲ���


//class Date {
//public:
//	//���캯���������أ�Ĭ�Ϲ��캯��Ϊ�޲ι���
//	//û����ʾ�����κ�һ�����캯�����������Զ������޲ι���
//	//�޲ι�����ȫȱʡ����ֻ�ܴ���һ����������Ĭ�Ϲ��죩
//	
//	//�κ�һ�����캯���������������Զ����ɵ�Ĭ�Ϲ��죩
//
//
//	//�޲ι���
//	/*Date()
//	{
//		cout << "Date()" << endl;
//	}*/
//	//ȫȱʡ
//	Date(int year = 2020, int month = 2, int day = 6)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//���ι���
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//
//	//����������������Դ����
//	//�޲��޷���ֵ
//	//����ʽ�������������������Զ�����һ��Ĭ�ϵ�����
//	//�����������Զ������Զ����Ա����������
//	~Date()
//	{}
//
//	//������ʾ���忽�����죬���������Զ�����һ����������
//	Date(const Date& d) //��������
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//
//	void Display()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		this->_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	/*Date d1;
//	d1.SetDate(2020, 2, 19);
//	d1.Display();*/
//
//
//
//	//�������ڴ�������ʱ�Զ����ù��캯��
//	//��ɶ������ݵĳ�ʼ���������Ǵ�������
//
//	//Date d;     //Ĭ�ϵ����޲ι���
//	Date d1(2020, 1, 1); //���ô��ι���
//	//Date d2();       //���ǵ����޲ι��캯������������һ�������������� d2,�����б�Ϊ �գ�����ֵΪ Date
//
//}







class Date {
public:
	Date(int y = 2020,int m = 2,int d = 3)
	{  //ȫȱʡ���캯��
		_y = y;
		_m = m;
		_d = d;
	}
	Date(const Date& d)
	{  //��������
		_y = d._y;
		_m = d._m;
		_d = d._d;
	}
	~Date()
	{}
	//��ͨ�еȺ���
	bool isEqual(const Date& d)
	{
		return _y == d._y && _m == d._m && _d == d._d;
	}
	//��������� ==
	//������һ�� this ָ��
	bool operator==(const Date& d1)
	{
		return _y == d1._y && _m == d1._m && _d == d1._d;
	}

	
	//��ֵ�����
	//�����Ҫ����������ֵ���򷵻�ֵ���Ͳ���Ϊ��
	//����ֵӦΪ��ǰ������
	Date& operator=(const Date& d)
	{
		//�ж��Ƿ����Լ����Լ���ֵ��ͨ��ָ��
		if (this != &d) { //�ж��Ƿ�ָ����ͬ�ڴ�---> ͬһ������
			_y = d._y;
			_m = d._m;
			_d = d._d;
			cout << "operator=" << endl;
		}
		return *this;
	}
private:
	int _y;
	int _m;
	int _d;
};

//�ǳ�Ա����
bool operator==(const Date& d1, const Date& d2)
{}

void test()
{
	Date d1(2020, 10, 2);
	Date d2(2020, 1, 12);
	Date d3(2020, 7, 12);

	//�ж����ڶ����Ƿ����
	//������������غ�����������ʽ
	if (d1.operator==(d2)) 
	{}
	//��д��ʽ
	if (d1 == d2)
	{}
	//�����������غ������ǳ�Ա����
	/*if (operator==(d1, d2))
	{}*/


	//��ֵ���޸�һ���Ѿ����ڶ��������
	d2 = d1;
	d2.operator=(d1);

	//������ֵ
	d1 = d2 = d3;
	d1.operator=(d2.operator=(d3));    //������ʽ

	Date d4 = d1;   //���Ǹ�ֵ-----���������죬����һ���µĶ���
}




// const �����ܵ��÷�const ��Ա����
//��const ������Ե��� const ��Ա����
//const ��Ա�������в����Ե��÷�const ��Ա����
//��const ��Ա�������п��Ե���const ��Ա����

class A {
public:
	int setI(int i) {
		_i = i;
	}
	// const ֻ�����γ�Ա����
	// const* A const ��const ���� this ָ�룬��ʾ�������ݲ����޸�
	int getI() const
	{
		return _i;
	}
	A* operator&()
	{
		return this;
	}
	const A* operator&() const
	{
		return this;
	}
private:
	int _i;
};

void test0()
{
	int a = 10;
	int* pa = &a;  // ָ������ݶ������޸�
	int* const paa = &a;
	const int* const pb = &a;
}

void test1()
{
	A a;      // �� const ����
	a.setI(10);
	a.getI();     

	const A b; //cosnt ����
	//b.setI(20);   //const �����ܵ��÷�const ��Ա����
	b.getI();
}




int main()
{
	/*test();*/
	return 0;
}