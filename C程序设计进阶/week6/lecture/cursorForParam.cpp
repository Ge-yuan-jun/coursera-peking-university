/**
* @Author: geyuanjun
* @Date:   2016-06-20 13:41:42
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-20 13:45:16
*/



#include<iostream>
using namespace std;

void Rank(int *q1,int *q2){
    int temp;
    if(*q1 < *q2){
        temp = *q1;
        *q1 = *q2;
        *q2 = temp;
    }
}

int main(){
    int a,b,*p1,*p2;
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    Rank(p1,p2);
    cout << a << " " << b << endl;
    return 0;
}
