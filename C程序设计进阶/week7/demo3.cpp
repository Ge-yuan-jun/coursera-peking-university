/**
* 结构体做函数参数
* 相当于copy一份给对方
* 与js中的对象不同
*/
#include<iostream>
using namespace std;

struct student {
  int id_num;
  char name[10];
};

void renew(student one) {
  one.id_num = 20130000 + one.id_num;
  for (int i = 0; one.name[i] != '\0'; i++) {
    one.name[i] = toupper(one.name[i]);
  }
  cout << one.id_num << " " << one.name << endl;
}

int main () {
  student mike1 = { 123, {'m', 'i', 'k', 'e', '\0'}};
  renew(mike1);
  cout << mike1.id_num << " " << mike1.name << endl;
  return 0;
}
