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
		//������ǿո���ߡ�.��������㵥�ʳ��� 
		if(s[i] != ' ' && s[i] != '.'){
			count ++;
		}else{
			//��¼����ʿ�ͷ���ڵ������������������ 
			if(count > max){
				index = i - count;
				max = count;	
			}
			count = 0;	
		} 
		//����ѭ�������� 
		if(s[i] == '.'){
			break;
		}
		i++;
	}
	
	//�������� 
	for( int j = index; j < index + max; j++){
		cout << s[j];
	}
	return 0;
}
