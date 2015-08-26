#include <iostream>
using namespace std;
int main(){
	int maxOdd = 0 ,minEven = 100;
	int num[5];
	for(int i=0;i<6;i++){
		cin >> num[i];
	}
	for(int i=0;i<6;i++){
		//判断数字为奇数还是偶数 
		if(num[i] % 2 == 0){
			//找出最小的偶数 
			if(minEven > num[i]){
				minEven = num[i];
			}
		}else{
			//找出最大的奇数 
			if(maxOdd < num[i]){
				maxOdd = num[i];
			}
		}
	}
	//输出相减的值得绝对值 
	if((maxOdd-minEven)<0){
		cout << -(maxOdd-minEven) << endl;
	}else{
		cout << (maxOdd-minEven) << endl;
	}
	
	return 0;
}
