#include<iostream>
using namespace std;
int main(){
	int iCount = 18;
	int * iptr = &iCount;
	*iptr = 58;//可以用来操作原来的iCount 
	cout << iCount << endl; 
	cout << iptr << endl;//指针变量 ，与iCount的地址值一样
	cout << &iCount << endl;
	cout << *iptr << endl;
	cout << &iptr << endl;//输出自己的地址，与iCount的地址值不相同 
	return 0;
}
