#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	char operation;
	cin >> num1 >> num2 >> operation;
	
	if(num2 == 0 && operation == '/'){
		cout << "Divided by zero!" << endl;
		return 0;
	}
	
	switch(operation){
		case '+' : result = num1 + num2;break;
		case '-' : result = num1 - num2;break;
		case '*' : result = num1 * num2;break;
		case '/' : result = num1 / num2;break;
		default  : cout << "Invalid operator!" << endl;return 0;
	}
	cout << result << endl; 
	
	return 0;
}
