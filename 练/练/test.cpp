#include<iostream>
#include<string>
#include<vector>
using namespace std;



//杨辉三角

vector<vector<int>> generate(int numRows)
{
	vector<vector<int>>  aa;      //创建一个二维数组
	aa.resize(numRows);           //开辟空间
	for (int i = 0; i < numRows; ++i) {
		aa[i].resize(i + 1, 1);    //开辟每一行对应列的空间

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
