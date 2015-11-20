#include<iostream>
using namespace std;

int main(){
	int n,sum;
	cin >> n >> sum;
	int num[n];
	int flag = 0;
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}

	//比较两数之和
	for(int j = 0; j < n; j++){
		for(int k = j+1; k < n; k++){
			if(j != k){
				if(num[j] + num[k] == sum){
					flag = 1;
					break;
				}
			} 
		} 
		//跳出两个循环的方法 
		if(flag){
			break;
		}
	} 
	
	if( flag ){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	return 0;
}
