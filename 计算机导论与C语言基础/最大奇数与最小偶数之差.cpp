#include <iostream>
using namespace std;
int main(){
	int maxOdd = 0 ,minEven = 100;
	int num[5];
	for(int i=0;i<6;i++){
		cin >> num[i];
	}
	for(int i=0;i<6;i++){
		//�ж�����Ϊ��������ż�� 
		if(num[i] % 2 == 0){
			//�ҳ���С��ż�� 
			if(minEven > num[i]){
				minEven = num[i];
			}
		}else{
			//�ҳ��������� 
			if(maxOdd < num[i]){
				maxOdd = num[i];
			}
		}
	}
	//��������ֵ�þ���ֵ 
	if((maxOdd-minEven)<0){
		cout << -(maxOdd-minEven) << endl;
	}else{
		cout << (maxOdd-minEven) << endl;
	}
	
	return 0;
}
