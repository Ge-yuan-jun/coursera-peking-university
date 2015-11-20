#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	//需要花费100元的张数 
	cout << n/100 << endl;
	
	n = n % 100;
	//需要花费50元的张数
	cout << n/50 << endl;
	
	n = n % 50;
	//需要花费20元的张数
	cout << n/20 << endl;
	
	n = n % 20;
	//需要花费10元的张数
	cout << n/10 << endl;
	
	n = n % 10;
	//需要花费5元的张数
	cout << n/5 << endl;
	
	n = n % 5;
	//需要花费1元的张数
	cout << n << endl; 
	
	
	
	return 0;
} 
