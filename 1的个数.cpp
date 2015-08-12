#include <iostream>
using namespace std;

int main(){
	int num;
	int numOf1[num];
	int array[num];
	cin>>num;
	
	for(int k=0;k<num;k++){
		cin>>array[k];
		
	}
	
	
	
	for(int i=0;i<num;i++){
		numOf1[i]=0;
		
		while(array[i] != 0){
			cout<<array[i]<<" ";
			array[i]=array[i] % 2;
			
			numOf1[i]+=1;	
		}
	}
	for(int j=0;j<num;j++){
		cout<<numOf1[j]<<endl;
	}
}
