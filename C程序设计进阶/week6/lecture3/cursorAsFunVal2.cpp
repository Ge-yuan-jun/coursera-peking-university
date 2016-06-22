/**
* @Author: geyuanjun
* @Date:   2016-06-22 10:19:59
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-22 10:23:32
*/



#include<iostream>
using namespace std;

int *getInt1(){
    int value1 = 20; //局部变量，函数执行完之后，局部变量被销毁
    return &value1;
}
int main(){
    int *p;
    p = getInt1();
    cout << *p << endl;//p所指向的内存空间被释放，不能打印出20
    return 0;
}
