#include<iostream>
#include<string>
#include<vector>
using namespace std;



//�������

vector<vector<int>> generate(int numRows)
{
	vector<vector<int>>  aa;      //����һ����ά����
	aa.resize(numRows);           //���ٿռ�
	for (int i = 0; i < numRows; ++i) {
		aa[i].resize(i + 1, 1);    //����ÿһ�ж�Ӧ�еĿռ�

		/*aa[i][0] = 1;
		aa[i][i] = 1;*/
	}
	for (int i = 2; i < numRows; ++i) {
		for (int j = 1; j < i ; ++j) {
			aa[i][j] = aa[i - 1][j] + aa[i - 1][j - 1];
		}
	}
	return aa;
}
