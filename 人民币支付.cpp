#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	//��Ҫ����100Ԫ������ 
	cout << n/100 << endl;
	
	n = n % 100;
	//��Ҫ����50Ԫ������
	cout << n/50 << endl;
	
	n = n % 50;
	//��Ҫ����20Ԫ������
	cout << n/20 << endl;
	
	n = n % 20;
	//��Ҫ����10Ԫ������
	cout << n/10 << endl;
	
	n = n % 10;
	//��Ҫ����5Ԫ������
	cout << n/5 << endl;
	
	n = n % 5;
	//��Ҫ����1Ԫ������
	cout << n << endl; 
	
	
	
	return 0;
} 
