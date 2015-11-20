#include<iostream>
#include<stdio.h> 
using namespace std;
int main(){
	int i,j;
	
	float idNum[4] = {0};//1-3号表示三个人累计的钱数;
	float varietyNum[4] = {0};//1-3号分别表示三个类别累计的钱数；
	
	
	for(i = 0; i < 3; i++){
		int id;//记录用户Id
		cin >> id;
		int num;//记录发票总张数 
		cin >> num; 
		for(j = 0; j < num; j++){
			char variety;
			float money;
			cin >> variety >> money;
			if(variety == 'A'){//种类A 
				varietyNum[1] += money;
			}else if(variety == 'B'){//种类B 
				varietyNum[2] += money;
			}else if(variety == 'C'){//种类C 
				varietyNum[3] += money;
			}
			idNum[id] += money;//对应的ID增加发票金额 
		}
	} 
	printf("1 %.2f\n", idNum[1]);
	printf("2 %.2f\n", idNum[2]);
	printf("3 %.2f\n", idNum[3]);
	printf("A %.2f\n", varietyNum[1]);
	printf("B %.2f\n", varietyNum[2]);
	printf("C %.2f\n", varietyNum[3]);
	return 0;
}
