#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	//�����λ 
	cout << num / 100 << endl;
	num = num % 100;
	//���ʮλ 
	cout << num / 10 << endl;
	num = num % 10;
	//�����λ 
	cout << num << endl;
	
	return 0;
}
