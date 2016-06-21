/**
* @Author: geyuanjun
* @Date:   2016-06-20 15:53:50
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-20 15:56:46
*/



//数组名做形参
#include<iostream>
using namespace std;
int sum(int array[], int n){
    for(int i = 0;i < 10-1; i++){
        *(array + 1) = *array + *(array + 1);
        array++;
    }
    return *array;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sum(a,10);
    return 0;
}
