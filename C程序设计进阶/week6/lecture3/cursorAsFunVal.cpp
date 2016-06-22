/**
* @Author: geyuanjun
* @Date:   2016-06-22 10:10:53
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-22 10:16:26
*/



//返回指针值得函数
//函数的返回值可以是多种类型
//1. 返回整型数据的函数； int main(int x, int y);
//2. 返回指针类型的函数 int *function(int x, int y);
#include<iostream>
using namespace std;

int *get(int arr[][4], int n, int m){
    int *pt;
    pt = *(arr + n -1) + m - 1;
    return(pt);
}

void main(){
    int a[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int *p;
    //打印第二行第三列的值
    p = get(a, 2, 3);
    cout << *p << endl;
}
