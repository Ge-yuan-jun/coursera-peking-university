#include<iostream>
#include<stdio.h> 
using namespace std;
int main(){
	int i,j;
	
	float idNum[4] = {0};//1-3�ű�ʾ�������ۼƵ�Ǯ��;
	float varietyNum[4] = {0};//1-3�ŷֱ��ʾ��������ۼƵ�Ǯ����
	
	
	for(i = 0; i < 3; i++){
		int id;//��¼�û�Id
		cin >> id;
		int num;//��¼��Ʊ������ 
		cin >> num; 
		for(j = 0; j < num; j++){
			char variety;
			float money;
			cin >> variety >> money;
			if(variety == 'A'){//����A 
				varietyNum[1] += money;
			}else if(variety == 'B'){//����B 
				varietyNum[2] += money;
			}else if(variety == 'C'){//����C 
				varietyNum[3] += money;
			}
			idNum[id] += money;//��Ӧ��ID���ӷ�Ʊ��� 
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
