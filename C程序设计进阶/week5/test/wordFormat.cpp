/*
=========================================
����

��һ��Ӣ�Ķ��ģ�����֮���Կո�ָ���ÿ�����ʰ�����ǰ����ڵı����ţ����뽫���������Ű棬Ҫ�����£�

ÿ�в�����80���ַ���ÿ�����ʾ���ͬһ���ϣ���ͬһ�еĵ���֮����һ���ո�ָ������׺���β��û�пո�

����

��һ����һ������n����ʾӢ�Ķ����е��ʵ���Ŀ. �����n���Կո�ָ���Ӣ�ĵ��ʣ����ʰ�����ǰ����ڵı����ţ���ÿ�����ʳ��ȶ�������40����ĸ����

���

�Ű��Ķ����ı���ÿ���ı��ַ������80���ַ�������֮����һ���ո�ָ���ÿ���ı���β��û�пո�

=========================================
*/
#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	char words[1000][40];
	char wordlen[1000];
	int n = 0;
	cin >> n;
	
	cin.get();//��ȡ���з�
	
	for(int i = 0; i < n; i++){
		char temp;
		
		for(int j = 0; j < 40; j++){
			cin.get(temp);
		
			if(temp !=' ' && temp !='\n'){
				words[i][j] = temp;
			}else{
				wordlen[i] = j;
				break;
			}
		}
		
	}
	
	int length = wordlen[0];
	for(int j = 0; j < wordlen[0]; j++){
		cout << words[0][j];
	} 
	
	for(int i = 1; i < n; i++){
		if(length + 1 + wordlen[i] <= 80 ){
			length = length + 1 + wordlen[i]; 
			cout << ' ';
			for(int k = 0; k < wordlen[i]; k++){
				cout << words[i][k];
			}
		}else{
			cout << endl;
			length = wordlen[i];
			for(int k = 0; k < wordlen[i]; k++){
				cout << words[i][k];
			}
		}
	}
	return 0;
}
