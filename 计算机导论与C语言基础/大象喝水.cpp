#include <iostream>
using namespace std;
int main(){
	int h,r,num;
	float v;
	float Pi = 3.14159;
	cin >> h >> r;
	//���ԲͲ���ж�������ˮ 
	v = (Pi * r * r * h)/1000;
	//�����������������Ҫ������֮���ټ���1 
	num = 20 / v + 1;
	cout << num << endl;
	return 0;
} 
