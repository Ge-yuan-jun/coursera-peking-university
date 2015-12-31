#include <iostream>
using namespace std;
void collatz(unsigned int n){
	if(n == 1){//terminate when n=1
		cout << "End" << endl;
		return;
	}
	if( n & 1 ){//n为二进制，如果为偶数，那么最后一位为0，那么 （0&1) 为false,f反之则为 true
		cout << n << "*3+1="<<3*n+1<<endl; 
		n += ((n << 1) + 1);
	}else{
		cout << n <<"/2=" << n/2<<endl;;
		n = n >> 1;
	}
	collatz(n);
}
int main(){
	int num;
	cin >> num;
	collatz(num);
}
