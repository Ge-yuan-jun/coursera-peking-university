#include<iostream>
using namespace std;

int main(){
	int num[5];
	int sum = 0;
	int j = 1;
	int i = 0;
	//记录输入值 
	for(; i < 6; i++){
		cin >> num[i];
	}
	
	
	//找出比第一个数小的数并且求和 
	for (; j <= 5; j++){
		
		if (num[j] < num[0]){
			
			sum =  sum + num[j];	
		}
	}
	
	cout << sum << endl;
	return 0;
}
