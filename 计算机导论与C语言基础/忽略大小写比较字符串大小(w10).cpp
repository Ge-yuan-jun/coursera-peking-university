#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[80],str2[80];
	int i = 0;
	cin.getline(str1,80);
	cin.getline(str2,80);
	char result;
	while ( str1[i] != '\0' ){
		if( str1[i] >= 65 && str1[i] <= 90 ){
			str1[i] += 32;
		}
		if( str2[i] >= 65 && str2[i] <= 90 ){
			str2[i] += 32;
		}
		if( str1[i] != str2[i] ){
			break;
		}
		i++;
	}
	if (str1[i] > str2[i]){
		result = '>';
	}else if(str1[i] < str2[i]){
		result = '<';
	}else{
		result = '=';
	}
	cout << result << endl;
	return 0;
}
