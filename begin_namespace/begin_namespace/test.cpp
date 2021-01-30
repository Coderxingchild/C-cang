//c++头文件都没有 .h 后缀
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
//
////C++入门--------命名空间、缺省参数、函数重载、引用(别名)
//
//
//namespace + 命名空间名称 [变量，函数]

namespace N1 {  
	int a = 0;
	void fun1() {
		printf("N1:fun1()\n");
	};
	namespace N2 {    //嵌套定义
		int a = 1;
		void fun1() {
			printf("N1:N2:fun1()\n");
		}
	}
}
namespace N1 {      //分段定义
	int b;
	void fun2() {
		printf("N1:fun2()\n");
	}
}
int a = 10;
void fun1()
{
	printf("fun1()\n");
}
void test()
{
	//打印全局 a 值 ---- 10
	printf("a: %d\n", a);
	//命名空间当中成员访问
	//1.命名空间 + :: +成员
	//2.using 命名空间::成员
	//3.展开命名空间 using namespace 命名空间

	printf("N1:a = %d\n", N1::a);
	printf("N1:N2:a = %d\n", N1::N2::a);
	using N1::fun2;
	printf("N1:fun2 \n", fun2);
	//using N1::a;
	//printf("N1:a = %d\n", a);   //与下两行中a发生冲突定义
	using N1::N2::a;
	printf("N1:N2:a = %d\n", a);
}
void test1()
{
	int a;
	//c++中输入输出流，定义的所有成员都属于 std 命名空间
	//支持连续输出输入
	std::cin >> a;
	std::cout << a;      //using namespace std;
}
//
//
//
//void fun2(int a = 10)
//{//缺省参数
//	cout << a << endl;
//}
//void fun3(int a)
//{
//	cout << a << endl;
//}
//void fun4(int a = 0, int b = 1, int c = 2, int d = 3, int e = 4)
//{//全缺省参数
//	cout << a <<" " <<  b << " " << c <<" " << d <<" " << e << endl;
//}
//void fun5(int a,int b,int c = 0,int d = 1)
//{//半缺省参数:设置默认值必须从右向左依次连续赋值，中间不能有间隔
//	cout << a << " " << b << " " << c << " " << d << endl;
//}
//void test2()
//{
//	fun2();
//	fun2(100); //缺省参数调用时可以传参也可以不传参
//	fun3(50);
//
//	fun4();
//	fun4(10);        //缺省值从左往右赋值
//	fun4(10, 20);
//	fun4(10, 20, 30);
//	fun4(10, 20, 30, 40);
//	fun4(10, 20, 30, 40, 50);
//}
//
//
////函数声明与函数定义只能有一个给默认参数赋值
//
//void fun6(int a); //声明
//void fun6(int a = 10) //定义
//{
//	cout << a << endl;
//}
//
//
////函数重载
////函数名相同，参数不同
////参数个数不同、参数顺序不同、参数类型不同
//
////只有返回值类型不同不能构成重载
//
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
//
//
//int main()
//{
//	//test1();
//	//test2();
//	int a = Add(10, 20);
//	return 0;
//}

//
////按照C语言进行编译
//extern "C" int Add(int a, int b);   //c 语言中底层函数 _Add ：只显示函数名信息
//char Add(char a, char b);          //c++ 语言中底层函数  不仅显示函数名信息还显示参数信息----------重载
//
//int main()
//{
//	int a = Add(10, 20);
//	char b = Add('a', 'b');
//	return 0;
//}



////引用必须初始化：表明当前变量指向哪一个实体
////一个变量可以有多个引用
////引用若做返回值，返回值的生命周期需要大于函数的生命周期（即不可以返回临时变量的值----调用完毕之后临时变量空间会被释放）
//
//void test()
//{
//	int a = 10;
//	//引用不需要分配新的空间
//	int& ra = a;   //引用---别名
//	ra = 20;   //会将 a 的值修改
//
//	//拷贝需要开辟新空间
//	int copy = a;
//	copy = 20;    //不会影响 a 的值
//
//
//	int b = 10;
//	int& ra = b;
//	int&ra1 = b;
//	int& ra2 = b;
//
//	int c = 30;
//	ra = c; //将 c 的值赋给 ra(b),而不是修改引用指向
//
//
//	//常引用：引用指向的实体不能修改
//	//const 类型&
//
//	const int a = 100;
//	const int& ra = a;
//
//	const int& ra1 = 100;
//
//	///////
//	double d = 2.5;
//	int c = 10;
//
//	c = d; //转换中存在一个临时变量
//
//	//int& ra2 = d;    //类型不匹配
//	const int& ra3 = d;  //存在一个整型的临时变量
//
//}



////交换函数
//
//void Swap(int* a,int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int& Swap(int& a, int& b)
//{
//	return a += b; //引用实现
//}
////int& Swap1(int& a, int& b)
////{
////	int c = a + b;
////	return c;          // c 是一个临时变量，使用结束会自动销毁
////}
//int main()
//{
//	int a = 10; int b = 20;
//	int &ra = Swap(a, b);
//	Swap(&a, &b);
//	return 0;
//}




//对比传值传引用的效率

struct A {
	int a[1000];
};

A globalA;

A fun1()
{
	return globalA;
}
A& fun2()
{
	return globalA;
}
void test()
{
	int n;
	cout << "设置循环次数：" << endl;
	cin >> n;

	size_t begin = clock();
	for (int i = 0; i < n; ++i) {
		fun1();
	}
	size_t end = clock();
	cout << "传值 time: " << end - begin << endl;

	begin = clock();
	for (int i = 0; i < n; ++i) {
		fun2();
	}
	end = clock();
	cout << "传引用 time: " << end - begin << endl;
}




int main()
{
	//test();
	return 0;
}


