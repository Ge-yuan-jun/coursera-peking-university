/**
* @Author: geyuanjun
* @Date:   2016-06-20 13:47:15
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-20 13:52:26
*/



#include<iostream>
using namespace std;

void sum(int *p,int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += *p++;
    }
    cout << total << endl;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    //数组名作为实参赋给指针型形参
    sum(a, 10);
    return 0;
}
