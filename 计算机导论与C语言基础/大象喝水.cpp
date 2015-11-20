#include <iostream>
using namespace std;
int main(){
	int h,r,num;
	float v;
	float Pi = 3.14159;
	cin >> h >> r;
	//求出圆筒含有多少升的水 
	v = (Pi * r * r * h)/1000;
	//体积不会是整数，需要再整除之后再加上1 
	num = 20 / v + 1;
	cout << num << endl;
	return 0;
} 
