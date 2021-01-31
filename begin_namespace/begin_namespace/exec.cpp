
//练习部分


#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;


//namespace N1 {
//	int a = 0;
//	void fun1() {
//		printf("N1:fun1()\n");
//	};
//	namespace N2 {    //嵌套定义
//		int a = 1;
//		void fun1() {
//			printf("N1:N2:fun1()\n");
//		}
//	}
//}
//namespace N1 {      //分段定义
//	int b;
//	void fun2() {
//		printf("N1:fun2()\n");
//	}
//}
//int a = 10;
//void fun1()
//{
//	printf("fun1()\n");
//}
//void test()
//{
//	printf("a: %d\n", a);
//
//	printf("N1:a = %d\n", N1::a);
//	printf("N1:N2:a = %d\n", N1::N2::a);
//	using N1::fun2;
//	fun2();
//	//using N1::a;
//	//printf("N1:a = %d\n", a);   //与下两行中a发生冲突定义
//	using N1::N2::a;
//	printf("N1:N2:a = %d\n", a);
//}



//void fun(int a)
//{
//	cout << a << endl;
//}
//void fun1(int a=10)
//{
//	//缺省参数
//	cout << a << endl;
//}
//void fun2(int a = 10, int b = 20, int c = 30)
//{
//	//全缺省参数
//	cout << a << " ";
//	cout << b << " ";
//	cout << c << " ";
//}
//void fun3(int a, int b, int c = 20, int d = 40)
//{
//	//半缺省参数
//	cout << a << " ";
//	cout << b << " ";
//	cout << c << " ";
//	cout << d << " ";
//}
//void test()
//{
//	fun(10);
//
//	fun1();
//	fun1(20);
//
//	fun2();
//	cout << endl;
//	fun2(50);
//	cout << endl;
//	fun2(50, 60, 70);
//	cout << endl;
//
//	fun3(50, 60, 70, 80);
//	cout << endl;
//	fun3(40,90);
//	cout << endl;
//}





//int Add(int a, int b)
//{
//	return a + b;
//}
//char Add(char a, char b)
//{
//	return a + b;
//}
//double Add(double a, double b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = 1, b = 2;
//	char c = 'a', d = 'b';
//	double e = 2.0, f = 3.0;
//
//	cout << Add(a, b) << endl;
//	cout << Add(c, d) << endl;
//	cout << Add(e, f) << endl;
//}




//extern "C" int Add(int a, int b);
//
//char Add(char a, char b);
//
//
//int main()
//{
//	//test();
//	int n = Add(10, 20);
//	char m = Add('a', 'b');
//	return 0;
//}



//void test()
//{
//	int a = 10;
//	int& ra = a;         //引用
//	cout << &a << " " << &ra << " ";
//	cout << a << ra << endl;
//
//	int copy = a;
//	cout << &copy << " ";
//	cout << copy << endl;
//
//}
//void test()
//{
//	int a = 10;
//	const int& ra = a;
//	cout << a << ra << endl;
//
//	/*ra = 20;
//	cout << a << ra << endl;*/
//}




//int Add(int a, int b)
//{
//	return a += b;
//}
//int& Add(int& a, int& b)
//{
//	return a += b;
//}





//void test()
//{
//	int a = 10;
//	int&ra = a;
//	ra = 20;
//
//	int copy = a;
//	copy = 20;
//
//}




//struct A {
//	int a[1000];
//};
//
//A globalA;
//
//A fun1()         //返回值
//{
//	return globalA;
//}
//A& fun2()          //返回引用
//{
//	return globalA;
//}
//void test()
//{
//	int n;
//	cout << "设置循环次数：" << endl;
//	cin >> n;
//
//	size_t begin = clock();
//	for (int i = 0; i < n; ++i) {
//		fun1();
//	}
//	size_t end = clock();
//	cout << "传值 time: " << end - begin << endl;
//
//
//
//	begin = clock();
//	for (int i = 0; i < n; ++i) {
//		fun2();
//	}
//	end = clock();
//	cout << "传引用 time: " << end - begin << endl;
//}



//void test()
//{
//	auto a = 10;     //auto 定义必须初始化
//	auto b = 2.0;
//	auto c = 'c';
//	auto d = 'a' + b;
//
//	//查看变量类型
//	cout << typeid(a).name() << endl;      //int     
//	cout << typeid(b).name() << endl;      //double
//	cout << typeid(c).name() << endl;     //char
//	cout << typeid(d).name() << endl;    //double
//
//}

void test()
{
	auto a = 10;      //必须初始化
	auto b = 'a';

	auto * pa = &a;
	auto  paa = &a;

	auto& pb = b;     //引用 & 不可少

	auto c = 10, d = 20, e = 30;    //同类型变量
}
int main()
{
	test();
	return 0;
}

