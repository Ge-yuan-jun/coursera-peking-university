#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int sum = 2*n-m;
	int num[sum];
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	//将前n-m个移动到后面 
	for(int j = 0;j < n-m; j++){
		num[n+j]=num[j];
	}
	//将重新排序的数组的前面的n-m个数删除 
	for(int k = 0; k < n; k++){
		num[k] = num[n-m+k];
		cout << num[k] << " "; 
	} 
	return 0;
}
