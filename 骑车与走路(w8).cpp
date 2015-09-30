#include<iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int distance[n-1];
	float walk;
	float bike;
	for (int i = 0; i < n; i++){
		cin >> distance[i];
	}
	
	for(int j = 0; j < n; j++){
		walk = distance[j]/1.2;
		bike = distance[j]/3.0 + 27 + 23;
		
		if(walk > bike){
			cout << "Bike" << endl;
		}else if(walk < bike){
			cout << "Walk" << endl;
		}else{
			cout << "All" << endl;
		}
	}
	return 0;
}
