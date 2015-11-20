#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int array[num];
	int arrayCopy[num];
	//接收参数 
	for(int i=0;i<num;i++){
		cin>>array[i];
	}
	//进行逆序重放操作 
	for(int i=0;i<num;i++){
		arrayCopy[i]=array[num-1-i];
		cout<<arrayCopy[i]<<" ";
	} 
	return 0;
}
