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


	//const int a = 10;   //����
	//// a = 100; �������
	return 0;
}



