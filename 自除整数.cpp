#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a,b,c;//�ֱ��¼3λ���Ƕ��� 
	for(int start = 10; start < n; start++){
		a = start/100;//��λ 
		b = start%100/10;//ʮλ 
		c = start%100%10; //��λ
		//��������������� 
		if(start % (a+b+c) == 0){
			cout << start << endl;
		} 
	}
	return 0;
} 
