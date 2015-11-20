#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int s[5][5]={0};
	int temp[5]={0};
	int n=0,m=0;
	for(int o = 0;o < 5;o++){
		for(int p = 0;p < 5;p++){
			cin >> s[o][p];
		}
	}
	cin >> n >> m;
	
	//ÅÐ¶ÏÊÇ·ñÊä³ö 
	if(n >= 5 || m >= 5 || n < 0 || m < 0){
		cout << "error" << endl;
	}else{
		//»¥»»Á½ÐÐ 
		for(int a = 0;a < 5; a++){
			temp[a] = s[n][a];
			s[n][a] = s[m][a];
			s[m][a] = temp[a];
		}
		//Êä³ö¾ØÕó 
		for (int i = 0; i < 5; i++)
			{
			  for (int  j = 0; j < 5; j++)
			  {
			    cout << setw(4) << s[i][j];
			  }
			  cout << endl;
			}
	} 

	return 0;
} 
