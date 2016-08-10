/**
 * 结构体与指针
 * 指向结构体的指针
 */
#include<iostream>
using namespace std;
struct student {
  int id_num;
  char name[10];
};

void renew (student *one) {
  one->id_num = 20130000 + one->id_num;
  for (int i = 0; one->name[i] != '\0'; i++) {
    one->name[i] = toupper(one->name[i]);
  }
}
int main() {
  student mike = {123, {'m', 'i', 'k', 'e', '\0'}};
  renew(&mike)
  cout << mike.id_num << " " << mike.name << endl; // mike内部的值被改变，不再是被copy一份赋值过去
  return 0;
}
