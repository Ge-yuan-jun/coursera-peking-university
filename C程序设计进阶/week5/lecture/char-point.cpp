//指针在字符串中与在数组中的不同之处 

#include<iostream>
using namespace std;

int main(){
	char a[] = "hello";
	char *p = a;
	
	//与数组的不同之处 
	cout << a << endl;	//输出字符串a的值 
	cout << p << endl; 	//输出字符串a的值 
	
	//想打印字符串的地址，写法如下：
	cout << static_cast<void*>(a) << endl; 
	return 0;
}
