#include<iostream>
using namespace std;

int main(){
	int num[5];
	int sum = 0;
	int j = 1;
	int i = 0;
	//��¼����ֵ 
	for(; i < 6; i++){
		cin >> num[i];
	}
	
	
	//�ҳ��ȵ�һ����С����������� 
	for (; j <= 5; j++){
		
		if (num[j] < num[0]){
			
			sum =  sum + num[j];	
		}
	}
	
	cout << sum << endl;
	return 0;
}
