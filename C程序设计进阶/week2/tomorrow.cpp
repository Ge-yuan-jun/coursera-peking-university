#include<iostream>
#include<stdio.h>
using namespace std;
int leap(int year){
	//�ж��Ƿ�Ϊ���� 
	if(((year%4 == 0)&&(year%100 != 0))||(year%400 == 0)){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	int y,m,d = 0;
	int day,month,year;
	scanf("%d-%d-%d",&y,&m,&d);
	//��Ҫ���ӵ��·��Լ����� 
	int yearCarrySave,monthCarrySave = 0;
	
	if(m == 1||m == 3||m == 5||m == 7||m == 8||m == 10||m == 12){
		//����ÿ��31����·ݵĴ��� 
		if(d == 31){
			day = 1;
			monthCarrySave = 1;
		}else{
			day = d + 1;
		}
	}else{
		if(m == 2){
			//�������·�2�µĴ��� 
			if(d == 28){
				if(leap){
					day = d + 1;
				}else{
					day = 1;
					monthCarrySave = 1;
				}
			}else if(d == 29){
				day = 1;
				monthCarrySave = 1;
			}else{
				day = d + 1;
			}
		}else{
			//��ÿ����30����·ݵĴ��� 
			if(d == 30){
				day = 1;
				monthCarrySave = 1;
			}else{
				day = d + 1;
			}
		}
	}
	
	//ͨ��֮ǰ���·��Լ������Ĵ��������Ƿ���Ҫ���������Լ����������ж� 
	month = m + monthCarrySave;
	if(month > 12){
		month  = 1;
		yearCarrySave = 1;
	}
	year = y + yearCarrySave;
	printf("%d-%02d-%02d\n",year,month,day);
	return 0;
}
