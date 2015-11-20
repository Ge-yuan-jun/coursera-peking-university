#include<iostream>
using namespace std;
int main(){
	int num[15000];
	int k = 0;
	int n;cin >> n;
	int s[15000]={0};
	while(n != 0){	
		for(int i = 0; i < n; i++){
			cin >> num[i];
		}
		//冒泡排序
		int temp = 0; 
		for(int i = 0; i < n-1; i++){
			for(int p = 1; p < n-i; p++){
				if(num[p-1]>num[p]){
					temp = num[p];
					num[p] = num[p-1];
					num[p-1] = temp;
				} 
			}
			
		}
		//分奇偶数进行输出 
		if( n%2 == 0 ){
			s[k] = int((num[n/2-1]+num[n/2])/2);
		}else{
			s[k] = int(num[n/2]);
		}
		k++;
		cin >> n;
	}
	for(int m = 0; m < k;m++){
		cout << s[m] << endl;
	}
	return 0;
}
