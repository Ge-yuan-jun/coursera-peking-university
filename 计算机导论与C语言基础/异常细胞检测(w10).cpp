#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	int s[100][100];
	//�������� 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> s[i][j];
		}
	}
	
	
	//ֻ��Ҫ�������������ҵ������е�Ԫ�� 
	for(int i = 1; i < n-1; i++){
		for(int j = 1; j < n-1; j++){
			if(( s[i-1][j]-s[i][j] >= 50 )&&( s[i+1][j]-s[i][j] >= 50 )&&(s[i][j-1]-s[i][j] >= 50 )&&( s[i][j+1]-s[i][j] >= 50 )){
				count++;
			}
		}
	}
	cout << count <<endl;
	return 0;
}
