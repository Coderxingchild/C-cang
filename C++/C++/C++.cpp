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
////ָ��ÿ��ʹ��ʱ����������пգ�����Ŀɶ��ԱȽϲ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);     //��ֵ���ܸı�ʵ��
//	Swap1(&a, &b);   //����ַ���Ըı�ʵ�δ�С
//	return 0; 
//}




//�������͵ı���
//�������ͱ�����ʵ��������ͬ�����͵�
//�������ͱ����ڶ���ʱ������ʼ��-----����������Ͳ�֪��ra ������˭�ı���
//һ�����������ж������
//����һ������һ��ʵ����ڲ�������������ʵ��
//int main()
//{
//	int a = 10;
//	int &ra = a;
//	int &ra1 = ra;//ra ���� a
//	// double &ra = a;  //���뱨������������ʵ�����Ͳ���
//
//	
//	int b = 100;
//	int &rb = b;
//	rb = a;     //�������� rb ��Ϊa �ı�����������a ��rb ��ֵ 
//	return 0;
//}


//������

//r ��main ������û�н����κ��޸ģ�Ϊʲô�ڶ��ε�����Add ���ý�����r ��ֵ����䣿
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
//	//const int a = 10;   //����
//	//// a = 100; �������
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	const int& ra = a;
//	a = 200;             //ra ��a �ı��� 
//
//	double d = 12.34;
//	double& rd = d;
//
//	d = 56.78;
//	cout << rd << endl;   // 56.78
//	return 0;
//}




//��������һ��������д���Ӽ��

//struct A {
//	int a;
//	int b;
//	struct B {
//		int c;
//		int d;
//	};
//	B sutB;
//};
////typedef �Ǹ�����ȡ����
//typedef A::B STUB;
//int main()
//{
//	A stuA;
//	stuA.sutB.c = 10;
//
//	//�����������stuA�ṹ����stuB��Ա�е�c����
//
//	stuA.sutB.c = 20;
//	stuA.sutB.c = 30;
//	int& rc = stuA.sutB.c;   //�����Ǹ�һ������ȡ����
//	rc = 40;
//
//	//����һ��B�ṹ��ı���
//	A::B b1;
//	A::B b2;
//
//	STUB b3;
//
//	return 0;
//}



//�������ö�������������Ϊ�����β�---�����Ͽ���ȡ��C�����е�һ��ָ��

//void Swap(int* pa, int* pb)  //ͨ��C��������
//{
//	int tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
////��ӡ����----������ͨ���βθı��ⲿʵ��
//void Print(const int& r)
//{
//	cout << r << endl;
//}
//
//void Swap(int& left, int& right)   //����
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


//��������������Ϊ�����ķ���ֵ����

//int& Add(int left, int right)
//{
//	int ret = left + right;
//	cout << "&ret= " << &ret << endl;
//	return ret;
//}
//int main()
//{
//	//result ���� Add ������ ret �ֲ������ı���
//	int& result = Add(1,2);
//	cout << "&result= " << &result << endl;
//	Add(3, 4);
//	Add(5, 6);
//	return 0;
//}




//void Swap(int* left, int* right)  //��ַ
//{
//	int tem = *left;
//	*left = *right;
//	*right = tem;
//}
//void Swap(int& left, int& right)   //����
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
