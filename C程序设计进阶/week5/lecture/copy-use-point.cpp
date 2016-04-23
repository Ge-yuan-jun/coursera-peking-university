#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char a[] = "how are you ?",b[20];
	char *p1 = a,*p2;
	
	//在C和C++编程中：
	//	1、'\0' 通常表示字符串结束，该字符后面的所有字符会被忽略。
	//	2、'\n'通常表示字符串从该字符后开始新的一行。
	
	for(p1 = a, p2 = b; *p1 != '\0'; p1++,p2++)
		*p2 = *p1;

	*p2 = '\0';
	cout << "String a is: " << a << endl;
	cout << "String b is: " << b << endl;
	
	return 0;
} 
