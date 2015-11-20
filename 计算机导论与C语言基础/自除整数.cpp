#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a,b,c;//分别记录3位数是多少 
	for(int start = 10; start < n; start++){
		a = start/100;//百位 
		b = start%100/10;//十位 
		c = start%100%10; //个位
		//如果存在则输出结果 
		if(start % (a+b+c) == 0){
			cout << start << endl;
		} 
	}
	return 0;
} 
