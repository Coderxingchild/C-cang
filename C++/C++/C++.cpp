#include<iostream>
using namespace std;


//void Swap(int left, int right)
//{
//	int tem = left;
//	left = right;
//	right = tem;
//}
//void Swap1(int* left, int* right)
//{
//	int tem = *left;
//	*left = *right;
//	*right = tem;
//}
////指针每次使用时都必须进行判空，代码的可读性比较差
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);     //传值不能改变实参
//	Swap1(&a, &b);   //传地址可以改变实参大小
//	return 0; 
//}




//引用类型的变量
//引用类型必须与实体类型是同种类型的
//引用类型变量在定义时候必须初始化-----否则编译器就不知道ra 到底是谁的别名
//一个变量可以有多个引用
//引用一旦引用一个实体后在不能引用其他的实体
//int main()
//{
//	int a = 10;
//	int &ra = a;
//	int &ra1 = ra;//ra 就是 a
//	// double &ra = a;  //编译报错，引用类型与实体类型不符
//
//	
//	int b = 100;
//	int &rb = b;
//	rb = a;     //并不是让 rb 成为a 的别名，而是用a 给rb 赋值 
//	return 0;
//}


//常引用

//r 在main 函数中没有进行任何修改，为什么第二次第三次Add 调用结束后，r 的值都会变？
//int& Add(int left, int right)
//{
//	int ret = 0;
//	ret = left + right;
//	return ret;
//}
//int main()
//{
//	int &r = Add(1, 2);
//	Add(3, 4);
//	Add(5, 6);
//
//
//	//const int a = 10;   //常量
//	//// a = 100; 编译出错
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	const int& ra = a;
//	a = 200;             //ra 是a 的别名 
//
//	double d = 12.34;
//	double& rd = d;
//
//	d = 56.78;
//	cout << rd << endl;   // 56.78
//	return 0;
//}




//引用作用一：代码书写更加简便

//struct A {
//	int a;
//	int b;
//	struct B {
//		int c;
//		int d;
//	};
//	B sutB;
//};
////typedef 是给类型取别名
//typedef A::B STUB;
//int main()
//{
//	A stuA;
//	stuA.sutB.c = 10;
//
//	//后续代码对于stuA结构体中stuB成员中的c访问
//
//	stuA.sutB.c = 20;
//	stuA.sutB.c = 30;
//	int& rc = stuA.sutB.c;   //引用是给一个变量取别名
//	rc = 40;
//
//	//定义一个B结构体的变量
//	A::B b1;
//	A::B b2;
//
//	STUB b3;
//
//	return 0;
//}



//引用作用二：引用类型作为函数形参---基本上可以取代C语言中的一级指针

//void Swap(int* pa, int* pb)  //通常C语言做法
//{
//	int tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
////打印函数----不期望通过形参改变外部实参
//void Print(const int& r)
//{
//	cout << r << endl;
//}
//
//void Swap(int& left, int& right)   //引用
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	Swap(&a, &b);
//	Print(a);
//	Print(b);
//
//	Swap(a, b);
//	Print(a);
//	Print(b);
//
//	return 0;
//}


//引用作用三：作为函数的返回值类型

//int& Add(int left, int right)
//{
//	int ret = left + right;
//	cout << "&ret= " << &ret << endl;
//	return ret;
//}
//int main()
//{
//	//result 就是 Add 函数中 ret 局部变量的别名
//	int& result = Add(1,2);
//	cout << "&result= " << &result << endl;
//	Add(3, 4);
//	Add(5, 6);
//	return 0;
//}




//void Swap(int* left, int* right)  //传址
//{
//	int tem = *left;
//	*left = *right;
//	*right = tem;
//}
//void Swap(int& left, int& right)   //引用
//{
//	int tem = left;
//	left = right;
//	right = tem;
//}
//int mian()
//{
//	int a = 10;
//	int b = 20;
//
//	Swap(&a, &b);
//	Swap(a, b);
//	
//	/*int* pa = &a;
//	*pa = 100;
//	int& ra = a;
//	ra = 100;*/
//
//	return 0;
//}



//int main()
//{
//	/*int a = 10;
//	int& ra = a;
//	int *p = &a;*/
//
//	char c = 'a';
//	char&rc = c;
//	char*pc = &c;
//	cout << sizeof(rc) << endl;  //1
//	cout << sizeof(pc) << endl;   //32--->4; 64--->8
//	
//	rc++;
//	pc++;
//	cout << sizeof(rc) << endl;  
//	cout << sizeof(pc) << endl;
//
//	int d = 10;
//	int&rd = d;
//	return 0;
//}



//int main()
//{
//	const int a = 10;
//	int*pa = (int*)&a;
//	*pa = 100;
//	cout << a << endl;
//	cout << *pa << endl;
//	return 0;
//}
