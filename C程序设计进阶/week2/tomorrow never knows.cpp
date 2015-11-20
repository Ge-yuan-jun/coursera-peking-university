#include<iostream>
#include<stdio.h>
using namespace std;
int leapYear(int year){
	if((year % 4 ==0 && year %100 != 0) || year  % 400 == 0){
		return 1;
	}else{
		return 0;
	}
} 

int main(){
	int year,month,day = 0;
	scanf("%d-%d-%d",&year,&month,&day);
	//首先判断是否是闰年 ,1为闰年， 0为非闰年 
	int leap = leapYear(year);
	if(day < 28){
		day += 1;
	}else if(day == 28){
		if(month == 2){
			if(leap){
				day += 1;
			}else{
				day = 1;
				month += 1;
			}
		}else{
			day += 1;
		}
	}else{
		if(day == 29){
			if(month == 2){
				day = 1;
				month += 1;
			}else{
				day += 1;
			}	
		}else if(day == 30){
			if(month == 1||3||5||7||8||10||12){
				day +=1;	
			}else{
				month +=1;
			}	
		}else{
			if(month == 12){
				year += 1;
				month = 1;
				day = 1;
			}else{
				month += 1;
				day = 1;
			}
		}	
	}
	printf("%d-%02d-%02d\n",year,month,day);
	return 0;
}
