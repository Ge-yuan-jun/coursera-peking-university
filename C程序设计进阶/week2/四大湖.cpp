#include<iostream>
using namespace std;
int main(){
	int Dt,Py,Hz,Th,sum[4] = {0};
	//Dt����ͥ��,Py��۶����,Hz�������,Th��̫��
	//����Ĵ������������1,2,3,4�ֱ��ʾ���ǵĴ�С��ϵ
	//1���4��С
	for(Py = 1; Py < 5; Py++){
		for(Dt = 1; Dt < 5; Dt++){
			//��ͥ��۶��������������ͬ 
			if(Dt == Py) continue;
				for(Th = 1; Th < 5 ; Th++){
					//̫���붴ͥ����۶��������������ͬ 
					if(Th == Dt || Th == Py) continue;
					//���������������ֱ�Ӹ�������������������������� 
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
