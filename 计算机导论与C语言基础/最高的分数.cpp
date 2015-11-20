#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int score[n];
	for(int i = 0;i < n;i++){
		cin >> score[i];
	}
	int max = score[0];
	for(int i = 1;i < n;i++){
		if(score[i] > max){
			max = score[i];
		}
	}
	cout << max << endl;
	return 0;
}
