#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int num;
	cin >> num;
	int input[num];
	int age[4] = {0,0,0,0};
	//在输入数据的同时直接计算不同年龄组中人数 
	for(int i = 0;i < num;i++){
		cin >> input[i];
		if(input[i] > 0 && input[i]<19){
			age[0] += 1;
		}else if(input[i] >= 19 && input[i] <36){
			age[1] += 1;
		}else if(input[i] >=36 && input[i] < 61){
			age[2] += 1;
		}else{
			age[3] += 1;
		}
	}
	double percent[4];
	for(int j = 0;j < 4;j++){
		percent[j] = double(age[j]) * 100/num;
	}
	cout << fixed << setprecision(2);
	cout << "1-18: "<< percent[0] << "%" << endl;
	cout << "19-35: "<< percent[1] << "%" << endl;
	cout << "36-60: "<< percent[2] << "%" << endl;
	cout << "60-: "<< percent[3] << "%" << endl;
	
	return 0;
}
