#include<iostream>
using namespace std;
int main(){
	int n;//��¼����Ľ���
	char a[100][100]; 
	int day;
	int sum = 0;//��¼�ܹ���Ⱦ������ 
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			//��¼�������� 
			cin >> a[i][j];
		}
	}
	cin >> day;//��¼����
	for(int d = 0; d < day; d++){
		//��ǰһ���ǵ��˸�Ⱦ 
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				if(a[j][k] == '!'){
					a[j][k] = '@';
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				//����Ⱦ��Χ���˱�� 
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
