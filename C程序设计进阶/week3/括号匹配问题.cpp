#include<iostream>
#include<cstring>
using namespace std;

int pp(int);
char c[300] = {'\0'};
int len;//��¼�����ַ������� 
int main(){
	while(cin.getline(c, 120)){
		cout << c << endl;
		len = strlen(c);
		int i = 0;
		for(i = 0; i < len; i++){//�����Ϊ���ţ����ÿ� 
			if(c[i] != '(' && c[i] != ')'){
				c[i] = ' ';
			}
		}
		i = 0;
		while(c[i] != 0){//���õݹ������ 
			while(c[i] != '(' && c[i] !=0)
				i++;
			if(c[i] == '(')
				i = pp(i);
		}
		i = 0;
		while(c[i] != 0){//�ݹ�֮��������ڡ���������˵���������޷�ƥ�� 
			if(c[i] == ')')
				c[i] = '?';
			i++;
		}
		cout << c << endl;
	} 
	return 0;
}

int pp(int pos){
	int i;
	i = pos + 1;//�������ŵ���һ��λ�ÿ�ʼ����ƥ�� 
	while(1){
		while(c[i] !='(' && c[i] != ')' && c[i] != 0)//�����������Թ����ÿ���֮ǰ���Ѿ����� 
			i++;
		if(c[i] == '('){
			i = pp(i);
		}else if(c[i] == ')'){//ƥ��ɹ��Ĵ��� 
			c[pos] = ' ';
			c[i] = ' ';
			return i+1;
		}else{//����߽磬����ѭ�������ٽ��еݹ� 
			c[pos] = '$';
			return len;
		}
	}
}
