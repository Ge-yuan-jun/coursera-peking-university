#include <iostream>
using namespace std;

int main(){
	int m;
	int n;
	cin>>m;
	cin>>n;
//	cin>>n; 
	int sum=0;
	//�ж�������m�Ƿ�Ϊ���� 
	if(m%2 != 0){
		while(m<=n){
			//�ۼ����� 
			sum += m;
			m += 2;
		}
	}else{
		//������������ȡ��m�����С������ 
		m += 1;
		while(m<=n){
			sum += m;
			m += 2;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
