#include<iostream>
#include<string.h>
using namespace std;

#pragma pack()   //设置默认对齐数

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



//class Student {
//public:        //公有成员在类外可见
////private   私有成员在类外不可见，protected 受保护可认为是私有的
////访问权限修饰符只限制成员在类外的访问权限，在类内部成员之间可以相互访问
//	//成员函数
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
//	//成员变量
//	char _name[20];
//	char _gender[5];
//	int _age;
//};
//void Student::PrintfStudent()   //成员函数在类内声明之后，在类外通过作用域限定符 :: 来定义实现
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//}
//void test()
//{
//	Student stu;
//	stu.SetStudent("李四", "男", 29);
//	stu.PrintfStudent();
//	//cout << stu._gender << endl;          //成员变量在public下可以访问到
//}




//struct A {
//	int _a;
//};
//class B {
//	int _b;
//};
//void test1()
//{
//	A Aa;              //struct  默认成员 public
//	Aa._a = 10;
//
//	//定义一个类类型的变量称为类的实例化，实例化的变量称为类的对象
//	//B Bb;              //class 默认成员 private
//	//Bb._b = 20;
//}




////空类的大小为 1
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
//	//类实例化之后对象的大小
//	//成员函数不占对象的空间：成员函数放在代码段
//	cout << sizeof(C) << endl;      // 1   ----------  空类大小为 1
//	cout << sizeof(D) << endl;      // 4 
//	cout << sizeof(E) << endl;      // 1      成员函数不占对象空间
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
//		cout << "小端" << endl;      //
//	else
//		cout << "大端" << endl;
//}





////每个非静态成员函数中默认存在一个 this 指针
////只存在于成员函数中
////作为函数的第一个形参
////this 指向当前调用此函数的对象
//// this 类型  * const this



////构造函数：初始化对象内容，不是创建对象
////创建对象时，编译器自动调用构造函数，不能显式调用
////若无显式定义构造则编译器自动生成无参构造否则不生成无参构造
////默认构造只有一个：无参构造/全缺省构造
////若有自定义成员，则构造函数会自动调用自定义成员的默认构造


//class Date {
//public:
//	//构造函数可以重载，默认构造函数为无参构造
//	//没有显示定义任何一个构造函数编译器会自动生成无参构造
//	//无参构造与全缺省构造只能存在一个（都属于默认构造）
//	
//	//任何一个构造函数（包括编译器自动生成的默认构造）
//
//
//	//无参构造
//	/*Date()
//	{
//		cout << "Date()" << endl;
//	}*/
//	//全缺省
//	Date(int year = 2020, int month = 2, int day = 6)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//带参构造
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//
//	//析构函数：对象资源清理
//	//无参无返回值
//	//不显式定义析构，编译器会自动生成一个默认的析构
//	//析构函数会自动调用自定义成员的析构函数
//	~Date()
//	{}
//
//	//若无显示定义拷贝构造，编译器会自动生成一个拷贝构造
//	Date(const Date& d) //拷贝构造
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
//	//编译器在创建变量时自动调用构造函数
//	//完成对象内容的初始化，并不是创建对象
//
//	//Date d;     //默认调用无参构造
//	Date d1(2020, 1, 1); //调用带参构造
//	//Date d2();       //不是调用无参构造函数，而是声明一个函数：函数名 d2,参数列表为 空，返回值为 Date
//
//}







class Date {
public:
	Date(int y = 2020,int m = 2,int d = 3)
	{  //全缺省构造函数
		_y = y;
		_m = m;
		_d = d;
	}
	Date(const Date& d)
	{  //拷贝构造
		_y = d._y;
		_m = d._m;
		_d = d._d;
	}
	~Date()
	{}
	//普通判等函数
	bool isEqual(const Date& d)
	{
		return _y == d._y && _m == d._m && _d == d._d;
	}
	//运算符重载 ==
	//隐含有一个 this 指针
	bool operator==(const Date& d1)
	{
		return _y == d1._y && _m == d1._m && _d == d1._d;
	}

	
	//赋值运算符
	//如果需要进行连续赋值，则返回值类型不能为空
	//返回值应为当前类类型
	Date& operator=(const Date& d)
	{
		//判断是否是自己给自己赋值：通过指针
		if (this != &d) { //判断是否指向相同内存---> 同一个对象
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

//非成员函数
bool operator==(const Date& d1, const Date& d2)
{}

void test()
{
	Date d1(2020, 10, 2);
	Date d2(2020, 1, 12);
	Date d3(2020, 7, 12);

	//判断日期对象是否相等
	//调用运算符重载函数的完整形式
	if (d1.operator==(d2)) 
	{}
	//简写形式
	if (d1 == d2)
	{}
	//如果运算符重载函数不是成员函数
	/*if (operator==(d1, d2))
	{}*/


	//赋值：修改一个已经存在对象的内容
	d2 = d1;
	d2.operator=(d1);

	//连续赋值
	d1 = d2 = d3;
	d1.operator=(d2.operator=(d3));    //完整形式

	Date d4 = d1;   //不是赋值-----》拷贝构造，创建一个新的对象
}




// const 对象不能调用非const 成员函数
//非const 对象可以调用 const 成员函数
//const 成员函数当中不可以调用非const 成员函数
//非const 成员函数当中可以调用const 成员函数

class A {
public:
	int setI(int i) {
		_i = i;
	}
	// const 只能修饰成员函数
	// const* A const ：const 修饰 this 指针，表示对象内容不可修改
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
	int* pa = &a;  // 指向和内容都可以修改
	int* const paa = &a;
	const int* const pb = &a;
}

void test1()
{
	A a;      // 非 const 对象
	a.setI(10);
	a.getI();     

	const A b; //cosnt 对象
	//b.setI(20);   //const 对象不能调用非const 成员函数
	b.getI();
}




int main()
{
	/*test();*/
	return 0;
}