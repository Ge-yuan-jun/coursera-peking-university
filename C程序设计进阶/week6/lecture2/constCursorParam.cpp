/**
* @Author: geyuanjun
* @Date:   2016-06-21 14:04:54
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-21 14:21:23
* @description: const value + cursor
*/

#include<iostream>
using namespace std;
int main(){
    //使用指向符号常量的指针
    const int a = 78;const int b = 28; int c = 18;
    const int *pi = &a;
    *pi = 58; //error,*p不能赋值
    pi = &b; //可以给pi重新赋值
    *pi = 68; //error,*p不能被重新赋值
    pi = &c; *pi =88;//error,*p不能被重新赋值
    return 0;
}
