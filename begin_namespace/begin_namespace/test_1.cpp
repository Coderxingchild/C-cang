//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
////��������:û�к���ջ֡�Ŀ���
////�� inline ʱ�ᷢ�������ĵ��� CALL    �� �� inline ʱ��һ���ᷢ���������ã�չ��--------����С�򵥺����ĵ���ʱ��ֱ��չ����
////����������֧�ַ��붨�壨�����Ͷ�����һ��
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
////C������  �ֲ�����ʱ��������int a ==== auto int a
////C++ ������  �Զ������Ƶ������ݱ��ʽ�Ƶ����������� auto a = 10 ������ʱȷ����
//
//
//
//void test1()
//{ 
//	//auto �Զ������Ƶ�
//	auto a = 10;     //auto ��������ʼ��
//	auto b = 2.0;
//	auto c = 'c';
//	auto d = 'a' + b;
//
//	//�鿴��������
//	cout << typeid(a).name() << endl;      //int     
//	cout << typeid(b).name() << endl;      //double
//	cout << typeid(c).name() << endl;     //char
//	cout << typeid(d).name() << endl;    //double
//
//
//	//auto �������ʱ�����ʼ��
//	//auto ����ָ�룬* ���п���
//	auto pa = &a;
//	auto* pb = &b;
//
//	//auto �������ã�& ������
//	auto &raa = a;
//
//	//һ�ж���������ʱ�����ʽ�Ƶ��������ͱ���һ��
//	auto m = 10, k = 20, j = 30;
//
//	//auto ������Ϊ��������
//	//auto ����ֱ��������������
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
//	//����Χȷ��ʱ
//	//��Χ for  : ��ǰ���ݣ�ѭ����Χ
//
//	for (int e : a) {
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//ʹ�����ÿ��Զ����ݽ����޸�
//	for (int& e : a) {
//		cout << e << " ";
//		e = 10;
//	}
//	cout << endl;
//
//	for (const int& e : a) {         //const �����������ݲ����Ա��޸�
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//	for (const auto&e : a) {       //const auto& ���Զ������Ƶ������ɱ��޸�
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//
////��������Ϊ��������ʱ���������˻���ָ�룬����ʹ�÷�Χfor �����б�������
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
//	int* p = NULL;      //Ԥ����ʱ�����к��滻  int* p = 0
//	//int* p = 0;
//	fun(NULL);            //fun(int)
//	fun((int*)NULL);      //fun(int*)
//	fun(nullptr);   //nullptr  ָ���ֵ
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
