#include<iostream>
using namespace std;

int main(){
	char s[500];
	cin.getline(s,500);
	int i = 0;
	int count = 0;
	int max = 0;
	int index = 0;
	while(i < 500){
		//如果不是空格或者“.”，则计算单词长度 
		if(s[i] != ' ' && s[i] != '.'){
			count ++;
		}else{
			//记录最长单词开头所在的索引，方便输出操作 
			if(count > max){
				index = i - count;
				max = count;	
			}
			count = 0;	
		} 
		//跳出循环的条件 
		if(s[i] == '.'){
			break;
		}
		i++;
	}
	
	//输出最长单词 
	for( int j = index; j < index + max; j++){
		cout << s[j];
	}
	return 0;
}
