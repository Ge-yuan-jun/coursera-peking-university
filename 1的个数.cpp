#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int numOf1[num];
	int array[num];
	
	//得到输入的树 
	for(int k=0;k<num;k++){
		cin>>array[k];
	}
		
	for(int i=0;i<num;i++){
		numOf1[i]=0;
		//得到 二进制数 以及其中 “1”的个数 
		while(array[i] != 0){
			//判断二进制数是否存在"1"，存在则+1 
			if(array[i] % 2==1){
				numOf1[i]+=1;
			}	
			array[i]=array[i] / 2;		
		}
	}
	
	//输出二进制数中1的个数 
	for(int j=0;j<num;j++){
		cout<<numOf1[j]<<endl;
	}
	return 0;
}
