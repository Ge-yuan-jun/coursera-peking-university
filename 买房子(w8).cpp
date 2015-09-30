#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//ÊäÈën£¬k 
	int n;
	int k;
	while(cin>>n>>k){
		int year = 1;
		
		while(year <= 20){
			if(n*year < 200*pow((1+k/100.0),year-1)){
				year += 1;	
			}else{
				cout << year <<endl;
				break;	
			}	
		}
		
		if(year > 20){
			cout<< "Impossible"<<endl;	
		}		 			
	} 
	
	return 0;
}
