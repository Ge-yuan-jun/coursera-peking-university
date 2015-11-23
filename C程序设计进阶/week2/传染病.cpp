#include<iostream>
using namespace std;
int main(){
	int n;//记录矩阵的阶数
	char a[100][100]; 
	int day;
	int sum = 0;//记录总共感染的人数 
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			//记录房间数据 
			cin >> a[i][j];
		}
	}
	cin >> day;//记录天数
	for(int d = 0; d < day; d++){
		//将前一天标记的人感染 
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				if(a[j][k] == '!'){
					a[j][k] = '@';
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				//将感染周围的人标记 
				if(a[i][j] == '@'){
					if( i+1 < n && a[i+1][j] == '.'){
						a[i+1][j] = '!';
					}
					if( i-1 >= 0 && a[i-1][j] == '.' ){
						a[i-1][j] = '!';
					}
					if( j+1 < n && a[i][j+1] == '.' ){
						a[i][j+1] = '!';
					}
					if( j-1 >= 0 && a[i][j-1] == '.'){
						a[i][j-1] = '!';
					}
				}
			}
		} 
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == '@'){
				sum++;
			}
		}
	}
	cout << sum << endl; 
	return 0;
}
