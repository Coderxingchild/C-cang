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
//
//	cout << a << endl;     //10 ����׶α��滻
//	cout << *pa << endl;     //100 ��a �ռ��ж�ȡ
//	return 0;
//}



//#define MAX 10  //��Ԥ����׶λᱻ�����滻
//int main()
//{
//	int a = 100;
//	a = MAX;    //Ԥ����ʱ�ỻ  a=10
//	return 0;
//}


//int main()
//{
//	const int a = 10;
//	int* pa = (int*)&a;
//
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	return 0;
//}


//���滻----Ԥ����
//const ���εĳ����滻-----���� ���������ͼ�⣩

//#define PI 3.14
//
//int main()
//{
//	int r = 2;
//	double s = PI * r * r;
//	return 0;
//}



//#define MAX(a,b) (a > b ? a : b)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << MAX(a, ++b) << endl;   //  a > ++b ? a : ++b ----------> b = 22
//	return 0;
//}




//��������
//Release �汾�������Դ�����Ż��ǳ���

//inline int Add(int left, int right)
//{
//	return left + right;
//}
//inline void TestInline()
//{
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", i);
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = 0;
//	c = Add(a, b);
//	printf("%d\n", c);
//	cout << c << endl;
//
//	TestInline();
//	return 0;
//}




//inline int Max(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Max(++b, a);
//	cout << c << endl;
//	return 0;
//}




//int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'c';
//	auto d = 12.34;
//	auto r = Add(10, 20);
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(r).name() << endl;
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	auto* pa1 = &a;
//	auto pa2 = &a;
//
//	cout << typeid(pa1).name << endl;
//	cout << typeid(pa2).name << endl;
//
//	int b = 10;
//	auto rb1 = b;
//	auto& rb2 = b;    // rb2 �� b �ı�����auto �����������ͱ���ʱ������Ҫ�� &   
//	cout << typeid(rb1).name << endl;
//	cout << typeid(rb2).name << endl;
//
//	return 0;
//}




int main()
{
	int a1[] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int i = 0; i < sizeof(a1) / sizeof(a1[0]); ++i) {
		a1[i] *= 2;
	}
	for (int i = 0; i < sizeof(a1) / sizeof(a1[0]); ++i)
		cout << a1[i] << " ";

	int array[] = { 1,2,3,4,5,6,7,8,9,0 };
	for (auto& e : array)
		e *= 2;
	for (auto& e : array)
		cout << e << " ";
	cout << endl;

	return 0;
}



