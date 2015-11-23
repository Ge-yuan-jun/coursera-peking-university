#include<iostream>
using namespace std;
float produce(int num,int sum){
	float result = float(sum/num);
	return result;
};

int main(){
	int num,sum = 0;//记录实验开始以以及结束时细菌的数目
	int groups = 0;//记录培养皿的组数
	int id[100] = {0};//记录培养皿编号 
	double rate[100] = {0.0};//记录培养皿的繁殖速率 
	cin >> groups;
	//记录下繁殖率以方便比较 
	for(int i = 0; i < groups; i++){
		cin >> id[i] >> num >> sum;
		float result = produce(num,sum);
		rate[i] = result;		
	} 
	//利用冒泡法排序进行比较
	for(int i = 0; i < groups; i++){
		for(int j = 0; j < groups - i - 1; j++){
			if(rate[j+1] > rate[j]){
				//调换id的位置 
				int tempId;
				tempId = id[j];
				id[j] = id[j+1];
				id[j+1] = tempId;
				//调换rate的位置
				double tempRate;
				tempRate = rate[j];
				rate[j] = rate[j+1];
				rate[j+1] = tempRate; 
			} 
		} 
	}
	
	//记录最大的差
	int diffMaxIndex = 0;
	float diffMaxRate = 0.0;
	for(int i = 0; i < groups-1; i++){
		float diff = rate[i] - rate[i+1];
		if(diff > diffMaxRate){
			diffMaxRate = diff;
			diffMaxIndex = i;//记录最大差的下标 
		}
	} 
	
	cout << diffMaxIndex+1 << endl;
	for(int i = diffMaxIndex; i >= 0; i--){
		cout << id[i] << endl;
	}
	
	cout << groups - diffMaxIndex - 1 << endl;
	for(int i = groups-1; i > diffMaxIndex; i--){
		cout << id[i] << endl;
	}
	return 0;
} 
