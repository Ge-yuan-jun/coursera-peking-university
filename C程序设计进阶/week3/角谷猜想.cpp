#include <iostream>
using namespace std;
void collatz(unsigned int n){
	if(n == 1){//terminate when n=1
		cout << "End" << endl;
		return;
	}
	if( n & 1 ){//nΪ�����ƣ����Ϊż������ô���һλΪ0����ô ��0&1) Ϊfalse,f��֮��Ϊ true
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
