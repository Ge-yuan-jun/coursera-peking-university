//����ָ���������ַ���ӵ�кܴ�ı���
//1����һ���ַ�������һ��ָ��
//2���������е�ĳ��Ԫ�ظ���ָ��
//3��������õ��ַ������鸳��ָ��
 

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char buffer[10] = "ABC";
	char *pc;
	
	//1����һ���ַ�������һ��ָ��
	pc = "hello";
	
	cout << pc << endl; // hello
	
	//2���������е�ĳ��Ԫ�ظ���ָ�� 
	pc++;
	cout << pc << endl; //pcָ��'e',�Ӷ���� 'ello'
	cout << *pc << endl; // pcָ��'e'���Ӷ�ָ������ַ�'e' 
	
	//3��������õ��ַ������鸳��ָ��
	pc = buffer;
	cout << pc << endl; //ABC 
	return 0;
}
