/**
* @Author: geyuanjun
* @Date:   2016-07-15 12:58:0
* @Email:  geyuanjun.sh@superjia.com
* @Last modified by:   geyuanjun
* @Last modified time: 2016-07-15 13:04:11
*/

/**
* 结构体变量赋值
* 结构体赋值相当于copy一份给对方
* 与js中的对象不同
*/
#include<iostream>
using namespace std;

struct student {
  int id_num;
  char name[10];
};

int main () {
  student mike1 = { 123, {'m', 'i', 'k', 'e', '\0'}};
  student mike2;
  mike2 = mike1;
  mike2.id_num = 20130000 + mike2.id_num;
  for (int i = 0; mike2.name[i] != '\0'; i++) {
    mike2.name[i] = toupper(mike2.name[i]);
  }
  cout << mike1.id_num << " " << mike1.name << endl;
  cout << mike2.id_num << " " << mike2.name << endl;
  return 0;
}
