#include <iostream>
using namespace std;

int main(){
	int a;
	//接收输入的树 
	cin >> a;
	//判断是否是周一、周三以及周五 
	if(a != 1 && a!= 3 && a!=5){
		cout<<"YES"<<endl;
	}else{
		//输出不能赴会 
		cout<<"NO"<<endl;
	}
	return 0;
}
