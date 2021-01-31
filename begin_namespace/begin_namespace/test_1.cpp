//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
////内联函数:没有函数栈帧的开销
////无 inline 时会发生函数的调用 CALL    ， 有 inline 时不一定会发生函数调用（展开--------》短小简单函数的调用时会直接展开）
////内联函数不支持分离定义（声明和定义在一起）
//
//
//inline int add(int a, int b)
//{
//	return a + b;
//}
//void test()
//{
//	int a = add(10, 20);      //int a = 10 + 20
//}
//
//
////auto 
////C语言中  局部（临时）变量：int a ==== auto int a
////C++ 语言中  自动类型推导：根据表达式推导变量的类型 auto a = 10 （编译时确定）
//
//
//
//void test1()
//{ 
//	//auto 自动类型推导
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
//
//	//auto 定义变量时必须初始化
//	//auto 定义指针，* 可有可无
//	auto pa = &a;
//	auto* pb = &b;
//
//	//auto 定义引用，& 不可少
//	auto &raa = a;
//
//	//一行定义多个变量时，表达式推导出的类型必须一致
//	auto m = 10, k = 20, j = 30;
//
//	//auto 不能作为函数参数
//	//auto 不能直接用来声明数组
//}
//
//void test2()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//
//	//当范围确定时
//	//范围 for  : 当前数据：循环范围
//
//	for (int e : a) {
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//使用引用可以对数据进行修改
//	for (int& e : a) {
//		cout << e << " ";
//		e = 10;
//	}
//	cout << endl;
//
//	for (const int& e : a) {         //const 代表引用数据不可以被修改
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//	for (const auto&e : a) {       //const auto& ：自动类型推导，不可被修改
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//
////当数组作为函数参数时，数组名退化成指针，不能使用范围for 来进行变量访问
//
//
//void fun(int a)
//{
//	cout << "fun(int)" << endl;
//}
//void fun(int* a)
//{
//	cout << "fun(int*)" << endl;
//}
//void test3()
//{
//	int* p = NULL;      //预处理时，进行宏替换  int* p = 0
//	//int* p = 0;
//	fun(NULL);            //fun(int)
//	fun((int*)NULL);      //fun(int*)
//	fun(nullptr);   //nullptr  指针空值
//
//	//cout << typeid(nullptr).name << endl;
//}
//
//int main()
//{
//	//test2();
//	test3();
//	return 0;
//}
