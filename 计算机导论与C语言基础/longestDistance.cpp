#include<iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main(){
	int num;
	cin >> num;
	float dot[1000000][2];
	for(int i = 0; i < num;i++){
		cin >> dot[i][0] >> dot[i][1];
	}
	//记录最大长度 
	float distance = 0.0;
	float record;
	double x,y;
	
	for(int j = 0; j < num; j++){
		for(int k = 0; k < num; k++){
			if(j != k){
				x = pow((dot[j][0]-dot[k][0]),2);
				y = pow((dot[j][1]-dot[k][1]),2);
				record = x + y;
				if(record > distance){
					distance = record;
				}
			}
		}
	}
	
	distance = sqrt(distance);
	
	cout << fixed << setprecision(4) << distance << endl;
	return 0;
}

