#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int numOf1[num];
	int array[num];
	
	//�õ�������� 
	for(int k=0;k<num;k++){
		cin>>array[k];
	}
		
	for(int i=0;i<num;i++){
		numOf1[i]=0;
		//�õ� �������� �Լ����� ��1���ĸ��� 
		while(array[i] != 0){
			//�ж϶��������Ƿ����"1"��������+1 
			if(array[i] % 2==1){
				numOf1[i]+=1;
			}	
			array[i]=array[i] / 2;		
		}
	}
	
	//�������������1�ĸ��� 
	for(int j=0;j<num;j++){
		cout<<numOf1[j]<<endl;
	}
	return 0;
}
