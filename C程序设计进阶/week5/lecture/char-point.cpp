//ָ�����ַ��������������еĲ�֮ͬ�� 

#include<iostream>
using namespace std;

int main(){
	char a[] = "hello";
	char *p = a;
	
	//������Ĳ�֮ͬ�� 
	cout << a << endl;	//����ַ���a��ֵ 
	cout << p << endl; 	//����ַ���a��ֵ 
	
	//���ӡ�ַ����ĵ�ַ��д�����£�
	cout << static_cast<void*>(a) << endl; 
	return 0;
}
