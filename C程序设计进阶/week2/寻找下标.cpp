#include<iostream>
using namespace std;
int main(){
	int num[100];
	int len;
	int boolNum = 1;
	cin >> len;
	for(int i = 0; i< len; i++){
		cin >> num[i];
	}
	
	for(int i = 0; i<len; i++){
		if(num[i] == i){
			boolNum = 0;
			cout << i << endl;
			break;
		}
	}
	if(boolNum){
		cout << "N" << endl;	
	}
	
	return 0;
}
