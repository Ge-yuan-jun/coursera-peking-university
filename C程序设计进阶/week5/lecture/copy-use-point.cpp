#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char a[] = "how are you ?",b[20];
	char *p1 = a,*p2;
	
	//��C��C++����У�
	//	1��'\0' ͨ����ʾ�ַ������������ַ�����������ַ��ᱻ���ԡ�
	//	2��'\n'ͨ����ʾ�ַ����Ӹ��ַ���ʼ�µ�һ�С�
	
	for(p1 = a, p2 = b; *p1 != '\0'; p1++,p2++)
		*p2 = *p1;

	*p2 = '\0';
	cout << "String a is: " << a << endl;
	cout << "String b is: " << b << endl;
	
	return 0;
} 
