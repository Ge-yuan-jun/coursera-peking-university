/**
* @Author: geyuanjun
* @Date:   2016-07-08 14:49:10
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-07-08 15:44:36
*/



/**
描述

某个科室的病房分为重症和普通，只有当病人的疾病严重程度超过了入住重症病房的最低严重值，才可以安排入住重症病房。

现在要求设计一个程序，给病人安排好病房。疾病的严重程度用0到10来表示，0表示小毛病，10表示非常严重。

输入

第一行输入病人的个数m(m < 50)，以及安排住入重症病房的最低严重值a

紧接着m行，每行表示病人编号（三个位，用0补齐）及其疾病的严重程度（浮点数，1位小数）。

每个病人的疾病严重程度都不一样。

输出

要求按照病人的严重程度输出住在重症病房里的病人的编号

注意：

如果当前所有病人的严重程度并不满足住在重症病房里，则输出“None.”（不包括引号）
 */

#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
	int sign[50];
	float ill[50];
	int m = 0;
	float level = 0.0; //���ǲ������س̶�
	cin >> m >> level;
	for(int i = 0; i < m; i++){
		cin >> sign[i] >> ill[i];
	}
	bool be = false; //��ʶ�Ƿ��в�������֢����
	for(int i = 0; i < m; i++){
		if(ill[i] > level){
			be = true;
			for(int j = i+1; j < m; j++){
				if(ill[j] >= level && ill[j] > ill[i]){
					float temp;
					temp = ill[j];
					ill[j] = ill[i];
					ill[i] = temp;
					int signTemp;
					signTemp = sign[i];
					sign[i] = sign[j];
					sign[j] = signTemp;
				}
			}
		}
	}
	if(be == false){
		cout << "None." << endl;
		return 0;
	}else{
		for(int i = 0; i < m; i++){
			if(ill[i] >= level){
				printf("%03d", sign[i]); //��Ҫ����cstdio
				cout << " " << setiosflags(ios::fixed) <<setprecision(1) << ill[i] << endl;
				//ȷ��С��λ����Ҫ����iomanip
			}
		}
	}
	return 0;
}
