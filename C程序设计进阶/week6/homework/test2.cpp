#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
		char a[256];
		cin.getline(a,256);// 从输入流中读取一行字符
		char newA[256];
		for (int j = 0; j < 256; j++) {
			// 只能通过读取一行的方式来处理输入，不能一边输入一边处理 
			if (a[j] == 'A') {
				newA[j] = 'T';
			} else if (a[j] == 'T') {
				newA[j] = 'A';
			} else if (a[j] == 'G') {
				newA[j] = 'C';
			} else if (a[j] == 'C') {
				newA[j] = 'G';
			} else {
				newA[j] = '\0';
				break;
			}
		}
		
		for (int j = 0; j < 256; j++){
			if (newA[j] != '\0') {
				cout << newA[j];
			} else {
				cout << endl;
				break;// 到达最后，则跳出循环 
			}	
		}
	}
	return 0;
}
