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
int& Add(int left, int right)
{
	int ret = 0;
	ret = left + right;
	return ret;
}
int main()
{
	int &r = Add(1, 2);
	Add(3, 4);
	Add(5, 6);


	//const int a = 10;   //常量
	//// a = 100; 编译出错
	return 0;
}



