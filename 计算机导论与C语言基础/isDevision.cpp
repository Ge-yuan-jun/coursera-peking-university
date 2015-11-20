#include<iostream>
using namespace std;

int main(){
	int num = 0;
	cin >> num;
	int _3 = 0;
	int _5 = 0;
	int _7 = 0;
	//判断是否能被3整除 
	if(num%3 == 0){
		_3 = 1;
	}
	//判断是否能被5整除 
	if(num%5 == 0){
		_5 = 1;
	}
	//判断是否能被7整除 
	if(num%7 == 0){
		_7 = 1;
	}
	if((_3==1) && (_5==1) && (_7==1)){
		//如果能被3、5、7整除 
		cout << "3" << " " << "5" << " " << "7" << endl;
	}else if(( _3==1 )&&( _5==1)){
		//如果能被3、5整除,不能被7整除 
		cout << "3" << " " << "5" << endl;
	}else if((_3==1)&&(_7 == 1)){
		//如果能被3,7整除，不能被5整除 
		cout << "3" << " " << "7" << endl;
	}else if((_5==1)&&(_7==1)){
		//如果能被5、7整除，不能被3整除 
		cout << "5" << " " << "7" << endl;
	}else if(_3==1){
		//z只能被3整除 
		cout << "3" << endl;
	}else if(_5==1){
		//只能被5整除 
		cout << "5" << endl;
	}else if(_7==1){
		//只能被7整除 
		cout << "7" << endl;
	}else{
		//不能被3或5或7整除 
		cout << "n" << endl;
	}
	return 0;
}
