#include <iostream>
using namespace std;

int main(){
	int k; 
	cin>>k;
	int a[k];
	int numOf1=0,numOf5=0,numOf10=0; 
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		if(a[i]==1){
			numOf1++;
		}else if(a[i]==5){
			numOf5++;
		}else if(a[i]==10){
			numOf10++;
		}
	}
	cout<<numOf1<<endl;
	cout<<numOf5<<endl;
	cout<<numOf10<<endl;
	
	return 0;
}
