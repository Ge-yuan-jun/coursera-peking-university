#include<iostream>
using namespace std;

int main(){
	int year = 0;
	int isRunNian = 0;
	cin >> year;
	int _4 = year % 4;
	int _100 = year % 100;
	int _400 = year % 400;
	int _3200 = year % 3200;
	if(((( _4 == 0) && ( _100 != 0))||( (_100 == 0)&&( _400 == 0))) && ( _3200 != 0)){
		isRunNian = 1;
	}
	if(isRunNian==1){
		cout << "Y" << endl;
	}else{
		cout << "N" << endl; 
	}
	
	return 0;
}
