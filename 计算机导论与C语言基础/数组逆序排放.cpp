#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int array[num];
	int arrayCopy[num];
	//���ղ��� 
	for(int i=0;i<num;i++){
		cin>>array[i];
	}
	//���������طŲ��� 
	for(int i=0;i<num;i++){
		arrayCopy[i]=array[num-1-i];
		cout<<arrayCopy[i]<<" ";
	} 
	return 0;
}
