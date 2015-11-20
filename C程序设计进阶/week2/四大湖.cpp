#include<iostream>
using namespace std;
int main(){
	int Dt,Py,Hz,Th,sum[4] = {0};
	//Dt：洞庭湖,Py：鄱阳湖,Hz：洪泽湖,Th：太湖
	//穷举四大湖的排名，用1,2,3,4分别表示它们的大小关系
	//1最大，4最小
	for(Py = 1; Py < 5; Py++){
		for(Dt = 1; Dt < 5; Dt++){
			//洞庭与鄱阳的排名不能相同 
			if(Dt == Py) continue;
				for(Th = 1; Th < 5 ; Th++){
					//太湖与洞庭或者鄱阳的排名不能相同 
					if(Th == Dt || Th == Py) continue;
					//洪泽湖的排名可以直接根据其他三个湖的排名计算出来 
					for(Hz = 1; Hz < 5; Hz++){
						if(Hz == Dt || Hz == Py || Hz == Th) continue;
						
						sum[0] = (1 == Dt) + (3 == Py) + (4 == Hz);
						sum[1] = (1 == Hz) + (4 == Dt) + (2 == Py) + (3 == Th);
						sum[2] = (4 == Hz) + (3 == Dt);
						sum[3] = (1 == Py) + (4 == Th) + (2 == Hz) +(3 == Dt);
						
						if(sum[0]==1 && sum[1]==1 && sum[2]==1 && sum[3]==1){
							cout << Py << endl;
							cout << Dt << endl;
							cout << Th << endl;
							cout << Hz << endl;
							return 0;
						}
							
					} 
					
					 
				}
		}
	} 
	return 0;
} 
