#include<iostream>
using namespace std;
float produce(int num,int sum){
	float result = float(sum/num);
	return result;
};

int main(){
	int num,sum = 0;//��¼ʵ�鿪ʼ���Լ�����ʱϸ������Ŀ
	int groups = 0;//��¼�����������
	int id[100] = {0};//��¼�������� 
	double rate[100] = {0.0};//��¼������ķ�ֳ���� 
	cin >> groups;
	//��¼�·�ֳ���Է���Ƚ� 
	for(int i = 0; i < groups; i++){
		cin >> id[i] >> num >> sum;
		float result = produce(num,sum);
		rate[i] = result;		
	} 
	//����ð�ݷ�������бȽ�
	for(int i = 0; i < groups; i++){
		for(int j = 0; j < groups - i - 1; j++){
			if(rate[j+1] > rate[j]){
				//����id��λ�� 
				int tempId;
				tempId = id[j];
				id[j] = id[j+1];
				id[j+1] = tempId;
				//����rate��λ��
				double tempRate;
				tempRate = rate[j];
				rate[j] = rate[j+1];
				rate[j+1] = tempRate; 
			} 
		} 
	}
	
	//��¼���Ĳ�
	int diffMaxIndex = 0;
	float diffMaxRate = 0.0;
	for(int i = 0; i < groups-1; i++){
		float diff = rate[i] - rate[i+1];
		if(diff > diffMaxRate){
			diffMaxRate = diff;
			diffMaxIndex = i;//��¼������±� 
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
