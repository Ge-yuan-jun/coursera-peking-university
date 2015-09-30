#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int l,m = 0;
	cin >> l >> m;
	int begin[m],end[m] = {0};
	int tree[10001]={0};
	int count = 0;
	for(int i = 0;i <= l; i++){
		tree[i] = 1;
	}
	
	for(int j = 0; j < m; j++){
		cin >> begin[j] >> end[j];
		if(end[j] > begin[j] ){
			for( int k = begin[j]; k <=end[j]; k++ ){
				tree[k] = 0;
			}
		}
	}
	
	for(int a = 0; a <= l; a++){
		if( tree[a]==1 ){
			count++;
		}
	}
	cout << count << endl;
	return 0;
} 
