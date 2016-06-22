/**
* @Author: geyuanjun
* @Date:   2016-06-22 10:35:39
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-22 10:37:3
*/



//返回一个处于生命周期中的变量的地址
//返回静态局部变量的地址，而非动态局部变量的地址
#include<iostream>
using namespace std;

int *getInt1(){

    static int value1 = 20;

    return &value1;
}
int *getInt2(){
    static int value2 = 30;
    
    return &value2;
}
int main(){
    int *p,*q;

    p = getInt1();
    q = getInt2();
    cout << *p << endl;

    return 0;
}
