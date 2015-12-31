#include<iostream>
#include<cstring>
using namespace std;

int pp(int);
char c[300] = {'\0'};
int len;//记录输入字符串长度 
int main(){
	while(cin.getline(c, 120)){
		cout << c << endl;
		len = strlen(c);
		int i = 0;
		for(i = 0; i < len; i++){//如果不为括号，则置空 
			if(c[i] != '(' && c[i] != ')'){
				c[i] = ' ';
			}
		}
		i = 0;
		while(c[i] != 0){//设置递归的条件 
			while(c[i] != '(' && c[i] !=0)
				i++;
			if(c[i] == '(')
				i = pp(i);
		}
		i = 0;
		while(c[i] != 0){//递归之后如果存在“）”，则说明右括号无法匹配 
			if(c[i] == ')')
				c[i] = '?';
			i++;
		}
		cout << c << endl;
	} 
	return 0;
}

int pp(int pos){
	int i;
	i = pos + 1;//从左括号的下一个位置开始尝试匹配 
	while(1){
		while(c[i] !='(' && c[i] != ')' && c[i] != 0)//不是括号则略过，置空在之前就已经处理 
			i++;
		if(c[i] == '('){
			i = pp(i);
		}else if(c[i] == ')'){//匹配成功的处理 
			c[pos] = ' ';
			c[i] = ' ';
			return i+1;
		}else{//到达边界，跳出循环，不再进行递归 
			c[pos] = '$';
			return len;
		}
	}
}
