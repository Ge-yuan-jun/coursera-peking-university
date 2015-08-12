#include <iostream>
using namespace std;

int main(){
	int m;
	int n;
	cin>>m;
	cin>>n;
//	cin>>n; 
	int sum=0;
	//判断正整数m是否为奇数 
	if(m%2 != 0){
		while(m<=n){
			//累加奇数 
			sum += m;
			m += 2;
		}
	}else{
		//不是奇数，则取比m大的最小的奇数 
		m += 1;
		while(m<=n){
			sum += m;
			m += 2;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
