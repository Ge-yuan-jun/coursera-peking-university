#include <cstdio>
void search( int n, int k, int num[]){
	for( int i = 0; i < n ;i ++){
		int count = 0;//��¼���ǵڼ�������
		
		//ͨ������֮��Ƚϴ�С��ȷ������(����������������ʵ������������) 
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
	
	//����search���� 
	search(n, k, num);
	
	return 0;
}
