#include <cstdio>
void search( int n, int k, int num[]){
	for( int i = 0; i < n ;i ++){
		int count = 0;//记录这是第几大数字
		
		//通过数字之间比较大小来确定排序(用数字来代表，并不实现真正的排序) 
		for( int j = 0; j < n ;j++){
			if (num[j] >= num[i]) count++;
		} 
		if(count == k){
			printf("%d\n",num[i]);
			break;
		}
	}
} 

int main(){
	int n, k, num[1000];
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	
	//调用search方法 
	search(n, k, num);
	
	return 0;
}
