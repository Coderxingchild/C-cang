//c++ͷ�ļ���û�� .h ��׺
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
//
////C++����--------�����ռ䡢ȱʡ�������������ء�����(����)
//
//
//namespace + �����ռ����� [����������]

namespace N1 {  
	int a = 0;
	void fun1() {
		printf("N1:fun1()\n");
	};
	namespace N2 {    //Ƕ�׶���
		int a = 1;
		void fun1() {
			printf("N1:N2:fun1()\n");
		}
	}
}
namespace N1 {      //�ֶζ���
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
	//��ӡȫ�� a ֵ ---- 10
	printf("a: %d\n", a);
	//�����ռ䵱�г�Ա����
	//1.�����ռ� + :: +��Ա
	//2.using �����ռ�::��Ա
	//3.չ�������ռ� using namespace �����ռ�

	printf("N1:a = %d\n", N1::a);
	printf("N1:N2:a = %d\n", N1::N2::a);
	using N1::fun2;
	printf("N1:fun2 \n", fun2);
	//using N1::a;
	//printf("N1:a = %d\n", a);   //����������a������ͻ����
	using N1::N2::a;
	printf("N1:N2:a = %d\n", a);
}
void test1()
{
	int a;
	//c++���������������������г�Ա������ std �����ռ�
	//֧�������������
	std::cin >> a;
	std::cout << a;      //using namespace std;
}
//
//
//
//void fun2(int a = 10)
//{//ȱʡ����
//	cout << a << endl;
//}
//void fun3(int a)
//{
//	cout << a << endl;
//}
//void fun4(int a = 0, int b = 1, int c = 2, int d = 3, int e = 4)
//{//ȫȱʡ����
//	cout << a <<" " <<  b << " " << c <<" " << d <<" " << e << endl;
//}
//void fun5(int a,int b,int c = 0,int d = 1)
//{//��ȱʡ����:����Ĭ��ֵ���������������������ֵ���м䲻���м��
//	cout << a << " " << b << " " << c << " " << d << endl;
//}
//void test2()
//{
//	fun2();
//	fun2(100); //ȱʡ��������ʱ���Դ���Ҳ���Բ�����
//	fun3(50);
//
//	fun4();
//	fun4(10);        //ȱʡֵ�������Ҹ�ֵ
//	fun4(10, 20);
//	fun4(10, 20, 30);
//	fun4(10, 20, 30, 40);
//	fun4(10, 20, 30, 40, 50);
//}
//
//
////���������뺯������ֻ����һ����Ĭ�ϲ�����ֵ
//
//void fun6(int a); //����
//void fun6(int a = 10) //����
//{
//	cout << a << endl;
//}
//
//
////��������
////��������ͬ��������ͬ
////����������ͬ������˳��ͬ���������Ͳ�ͬ
//
////ֻ�з���ֵ���Ͳ�ͬ���ܹ�������
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
////����C���Խ��б���
//extern "C" int Add(int a, int b);   //c �����еײ㺯�� _Add ��ֻ��ʾ��������Ϣ
//char Add(char a, char b);          //c++ �����еײ㺯��  ������ʾ��������Ϣ����ʾ������Ϣ----------����
//
//int main()
//{
//	int a = Add(10, 20);
//	char b = Add('a', 'b');
//	return 0;
//}



////���ñ����ʼ����������ǰ����ָ����һ��ʵ��
////һ�����������ж������
////������������ֵ������ֵ������������Ҫ���ں������������ڣ��������Է�����ʱ������ֵ----�������֮����ʱ�����ռ�ᱻ�ͷţ�
//
//void test()
//{
//	int a = 10;
//	//���ò���Ҫ�����µĿռ�
//	int& ra = a;   //����---����
//	ra = 20;   //�Ὣ a ��ֵ�޸�
//
//	//������Ҫ�����¿ռ�
//	int copy = a;
//	copy = 20;    //����Ӱ�� a ��ֵ
//
//
//	int b = 10;
//	int& ra = b;
//	int&ra1 = b;
//	int& ra2 = b;
//
//	int c = 30;
//	ra = c; //�� c ��ֵ���� ra(b),�������޸�����ָ��
//
//
//	//�����ã�����ָ���ʵ�岻���޸�
//	//const ����&
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
//	c = d; //ת���д���һ����ʱ����
//
//	//int& ra2 = d;    //���Ͳ�ƥ��
//	const int& ra3 = d;  //����һ�����͵���ʱ����
//
//}



////��������
//
//void Swap(int* a,int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int& Swap(int& a, int& b)
//{
//	return a += b; //����ʵ��
//}
////int& Swap1(int& a, int& b)
////{
////	int c = a + b;
////	return c;          // c ��һ����ʱ������ʹ�ý������Զ�����
////}
//int main()
//{
//	int a = 10; int b = 20;
//	int &ra = Swap(a, b);
//	Swap(&a, &b);
//	return 0;
//}




//�Աȴ�ֵ�����õ�Ч��

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
	cout << "����ѭ��������" << endl;
	cin >> n;

	size_t begin = clock();
	for (int i = 0; i < n; ++i) {
		fun1();
	}
	size_t end = clock();
	cout << "��ֵ time: " << end - begin << endl;

	begin = clock();
	for (int i = 0; i < n; ++i) {
		fun2();
	}
	end = clock();
	cout << "������ time: " << end - begin << endl;
}




int main()
{
	//test();
	return 0;
}


