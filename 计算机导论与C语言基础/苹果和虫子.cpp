#include <iostream>
using namespace std;
int main(){
	int n,x,y;
	int numOfStay;
	cin >> n >> x >> y;
	
//	//�ж�������û�гԵ�������ƻ������Ҫ�ټ�ȥһ�� 
//	if(y % x > 0){
//		numOfStay = n - y/x -1;
//	}else{
//	//�������������Ѿ���������������ƻ�� 
//		numOfStay = n - y/x;
//	}
	
	if(y % x == 0){
		numOfStay = n - y/x;
	} else{
		numOfStay = n - y/x -1;
	}
	
	//���numOfStay<0����ʾ������ƻ������ 
	if(numOfStay < 0){
		numOfStay = 0;
	}
	cout << numOfStay <<endl;
	return 0;
}
