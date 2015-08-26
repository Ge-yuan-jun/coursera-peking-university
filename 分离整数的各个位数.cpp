#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	//输出百位 
	cout << num / 100 << endl;
	num = num % 100;
	//输出十位 
	cout << num / 10 << endl;
	num = num % 10;
	//输出各位 
	cout << num << endl;
	
	return 0;
}
