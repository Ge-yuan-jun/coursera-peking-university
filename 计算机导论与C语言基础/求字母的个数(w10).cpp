#include<iostream>
using namespace std;

int main(){
	int aNum = 0,eNum = 0,iNum = 0,oNum = 0,uNum = 0,i = 0;
	char s[80];
	cin.getline(s,80);
	while(s[i] != '\0'){
		switch (s[i]){
			case 'a':aNum++;break;
			case 'e':eNum++;break;
			case 'i':iNum++;break;
			case 'o':oNum++;break;
			case 'u':uNum++;break;
		}
		i++;
	}
	cout << aNum << " " << eNum << " " << iNum << " " << oNum << " "<< uNum << endl;
	return 0;
}
