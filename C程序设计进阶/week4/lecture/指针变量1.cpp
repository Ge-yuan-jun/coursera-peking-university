#include<iostream>
using namespace std;
int main(){
	int iCount = 18;
	int * iptr = &iCount;
	*iptr = 58;//������������ԭ����iCount 
	cout << iCount << endl; 
	cout << iptr << endl;//ָ����� ����iCount�ĵ�ֵַһ��
	cout << &iCount << endl;
	cout << *iptr << endl;
	cout << &iptr << endl;//����Լ��ĵ�ַ����iCount�ĵ�ֵַ����ͬ 
	return 0;
}
