#include<iostream>
using namespace std;

int main(){
	int a[4] = {1, 3, 5, 7};
	cout << a << endl;//指向数组的第一个元素的指针 
	cout << a+1 << endl; 
	cout << &a << endl;//指向整个数组a的指针 
	cout << &a+1 << endl;//跨越整个数组之后的地址 
	cout << *(&a) << endl;//&a所指向的东西 -> 数组a -> 相当于打印a 
	cout << *(&a)+1 << endl;
	cout << *a << endl;
	return 0;
} 

//若a是指向数组第一个元素的指针，即a相当于&a[0]
//&a是“指向数组”的指针；&a+1将跨越16个字节
	//&a相当于 管辖范围“上升”了一级
//*a是数组的第一个元素a[0]；即*a等价于a[0]
	//*a相当于 管辖范围“下降”了一级 
