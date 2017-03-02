/*

  编写一个程序，能够询问用户的姓名，并读取用户所输入的内容。请确保用户输入的长度大于两个字符。如果用户的确输入了有效名称，就响应一些信息。

  请以两种方式实现：
    1. 第一种使用 C-style 字符串
    2. 第二种使用 string 对象

*/

/* C-style字符串 */
/*
#include <iostream>
#include "stdio.h"
using namespace std;

int main() {
	char first[10], last[10];
	
	do {
		printf("%s", "Please enter your first name: \n");
		
		gets(first); //gets()函数可以接受字符串中有空格、TAB，以回车结束输入，会舍弃最后的回车符；
		
	} while (strlen(first) < 2);
	
	do {
		printf("%s", "Please enter your last name: \n");
		
		scanf("%s", last); //scanf()以Space、Enter、Tab结束一次输入，不会舍弃最后的回车符；最后的回车符会被当做输入，ASCII码10
		
	} while (strlen(last) < 2);
	
  printf("hello, %s-%s", first, last);

	return 0;
} 
*/

/* String字符串 */
#include <iostream>
#include <string>

int main() {
	string name;
	cout << "what's your name ?" << endl;
	
	while((cin >> name) && (name.size() <= 2)) {
		cout <<"please input your name more than 2 characters: ";
	}
	
	cout << "Hello, " << name << "... and goodBye!";
	return 0;
}

