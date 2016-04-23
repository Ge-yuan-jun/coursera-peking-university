//利用指针来操作字符串拥有很大的便利
//1、将一个字符串赋给一个指针
//2、将数组中的某个元素赋给指针
//3、将定义好的字符串数组赋给指针
 

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char buffer[10] = "ABC";
	char *pc;
	
	//1、将一个字符串赋给一个指针
	pc = "hello";
	
	cout << pc << endl; // hello
	
	//2、将数组中的某个元素赋给指针 
	pc++;
	cout << pc << endl; //pc指向'e',从而输出 'ello'
	cout << *pc << endl; // pc指向'e'，从而指针输出字符'e' 
	
	//3、将定义好的字符串数组赋给指针
	pc = buffer;
	cout << pc << endl; //ABC 
	return 0;
}
