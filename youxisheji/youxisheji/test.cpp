#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

#pragma warning (disable:4996)


void menu()
{
	cout << "**********************************" << endl;
	cout << "*******  ��ӭ�������Ҿ���  *******" << endl;
	cout << "   1,��ʼ��Ϸ         2.�˳���Ϸ  " << endl;
	cout << "**********************************" << endl;
	cout << "Please enter your choice>:" ;
}

int main()
{
	while (1){
		menu();
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "WIN!" << endl;
			break;
		case 2:
			cout << "FAULSE!" << endl;
			break;
		default:
			cout << "Please enter your choice again!" << endl;
			break;
		}
	}
	return 0;
}


//int Add(int x, int y)
//{
//	return x + y;
//}


//template <typename T>
//T Add(const T x, const T y)
//{
//	return x + y;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);               //�Զ�ƥ��
//
//	double f = 1.0;
//	double d = 4.4;
//	double e = Add(f, d);
//}
//int main()
//{
//	test();
//	return 0;
//}




//namespace N {            //�����ռ��ʹ��
//	int a = 10;
//	int b = 20;
//	namespace W {
//		int c = 5;
//	}
//}
//namespace M {
//	int a = 9;
//}
//namespace M {
//	int d = 7;
//}
////using namespace N
////using namespace M
//int main()
//{
//	printf("κ��������\n");
//
//	std::cout << N::a << std::endl;
//
//	cout << N::a << endl;
//	cout << M::a << endl;
//	cout << N::W::c << endl;
//	printf("%d\n", M::d);
//	printf("%d\n", N::a);        //˵���������ӡ�ı�����������-----------����ӡ�����Ǹ�a
//	printf("%d\n", M::a);
//	printf("%d\n", N::W::c);
//	system("pause");
//	return 0;
//}