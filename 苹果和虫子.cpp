#include <iostream>
using namespace std;
int main(){
	int n,x,y;
	int numOfStay;
	cin >> n >> x >> y;
	
//	//判断条件，没有吃掉完整的苹果，需要再减去一个 
//	if(y % x > 0){
//		numOfStay = n - y/x -1;
//	}else{
//	//可以整除代表已经吃了完整个数的苹果 
//		numOfStay = n - y/x;
//	}
	
	if(y % x == 0){
		numOfStay = n - y/x;
	} else{
		numOfStay = n - y/x -1;
	}
	
	//如果numOfStay<0，表示超出了苹果总数 
	if(numOfStay < 0){
		numOfStay = 0;
	}
	cout << numOfStay <<endl;
	return 0;
}
