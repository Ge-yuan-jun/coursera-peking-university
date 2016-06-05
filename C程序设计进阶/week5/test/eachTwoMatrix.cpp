/*==================================================
描述

给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按从左上到右下的对角线顺序遍历整个数组。

输入

输入的第一行上有两个整数，依次为row和col。

余下有row行，每行包含col个整数，构成一个二维整数数组。

（注：输入的row和col保证0 < row < 100, 0 < col < 100）

输出

按遍历顺序输出每个整数。每个整数占一行。
====================================================
*/

#include<iostream>
using namespace std;
int main(){
	int row = 0, 
		col = 0,
		k = 0,
		a[100][100];

	cin >> row >> col;
	
	
	for(int i = 0; i< row; i++){
		for(int j = 0; j < col; j++){
			cin >> a[i][j];
		}
	}
	
	k = row + col - 1;
	
	for(int i = 0; i <= k; ++i){
		int c = i - 1;
		for(int r = 0; r < row; r++){
			if( c < col && c >= 0 ){
				cout << *(*(a + r) + c) << endl;
			}
			c--;
		}
	}
	
	return 0;
} 
