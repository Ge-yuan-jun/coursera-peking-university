#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

void changeWordOrder( char* str ){
	//print whitespace
	while (*str && *str == ' '){
		putchar(*str++);
	}
	if(!(*str))
		return;

	//print the reversed word
	char *next = str;
	while (*next && *next != ' ')
		next++;
	char *end = next - 1;
	while (end != str-1)
		putchar(*end--);
		
	//handle next word
	changeWordOrder(next);
}

int main(){
	char str[500] = {'\0'};
	cin.getline(str,500);
	
	changeWordOrder(str);
	return 0;
}
