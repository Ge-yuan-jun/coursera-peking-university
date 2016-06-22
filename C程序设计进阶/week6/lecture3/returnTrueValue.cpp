/**
* @Author: geyuanjun
* @Date:   2016-06-22 10:29:4
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-22 10:31:32
*/



//确保返回一个处于生命周期中的变量的地址
//返回全局变量的地址，而不是局部变量的地址
#include<iostream>
using namespace std;

int value1 = 20;
int value2 = 30;
int *getInt1(){
    return &value1;
}
int *getInt2(){
    return &value2;
}
int main(){
    int *p,*q;

    p = getInt1();
    q = getInt2();
    cout << *p << endl;
    
    return 0;
}
