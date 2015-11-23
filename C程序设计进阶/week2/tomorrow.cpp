#include<iostream>
#include<stdio.h>
using namespace std;
int leap(int year){
	//判断是否为闰年 
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
	//需要增加的月份以及年数 
	int yearCarrySave,monthCarrySave = 0;
	
	if(m == 1||m == 3||m == 5||m == 7||m == 8||m == 10||m == 12){
		//对于每月31天的月份的处理 
		if(d == 31){
			day = 1;
			monthCarrySave = 1;
		}else{
			day = d + 1;
		}
	}else{
		if(m == 2){
			//对特殊月份2月的处理 
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
			//对每个月30天的月份的处理 
			if(d == 30){
				day = 1;
				monthCarrySave = 1;
			}else{
				day = d + 1;
			}
		}
	}
	
	//通过之前的月份以及天数的处理来对是否需要增加月数以及年数进行判断 
	month = m + monthCarrySave;
	if(month > 12){
		month  = 1;
		yearCarrySave = 1;
	}
	year = y + yearCarrySave;
	printf("%d-%02d-%02d\n",year,month,day);
	return 0;
}
