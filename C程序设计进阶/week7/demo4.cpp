#include<iostream>
using namespace std;

struct student {
  int id_num;
  char name[10];
};

// 结构体做函数返回值
student newone() {
  // one 为局部变量，调用完成one就被销毁了
  student one = {20130123, {'M', 'I', 'K', 'E', '\0'}};
  return one;
}

int main() {
  // copy newone 函数里面的one 赋值给mike
  student mike = newone();
  cout << mike.id_num << ' ' << mike.name << endl;
  return 0;
}
