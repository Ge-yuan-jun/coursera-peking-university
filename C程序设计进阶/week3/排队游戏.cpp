#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
char c[110]={0};
char female;
char male;
int bg(int n){
	//�ҵ�ƥ�� 
	if(c[n] == female){
		return n;
	}
		
	//������� 
	if(c[n] == 0){
		return n;
	}
		
	int r = n+1; 
	//����һ����ʼ����
	while(c[r] != 0 && c[r] != female){
		//���ƽ�еĵݹ��ѭ�����Լ�ע��֮ǰr=n+1��ԭ����������ÿ�εݹ����ʱ���ص�����ƥ��������ŵ���һ��λ�á�
		r = bg(r); 
	} 
	if(c[r] == female){
		cout << n << " " << r << endl;
		return r+1;
	}else{
		return r;
	}
		
}

int main(){
	cin >> c;
	//�����Ա� 
	male = c[0];
	int n = strlen(c);
	for(int i = 0; i < n; i++){
		if( c[i] != male ){
			female = c[i];
			break;
		}
	}
	bg(0);//����ݹ麯�� 
	
	return 0;
}


