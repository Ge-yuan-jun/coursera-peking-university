/**
* @Author: geyuanjun
* @Date:   2016-06-20 13:55:16
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-06-20 14:00:58
*/



//多维数组名做函数参数
#include<iostream>
using namespace std;
int maxValue(int (*p)[4]){
    int max = p[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(p[i][j] > max){
                max = p[i][j];
            }
        }
    }
    return max;
}

int main(){
    int a[3][4] = {{1,3,5,7},{9,11,13,15},{2,4,6,8}};
    cout << "The max value is " << maxValue(a);
    return 0;
}
