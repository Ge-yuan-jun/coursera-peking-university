/**
 * 结构体与指针
 * 指向结构体的指针
 */
#include<iostream>
using namespace std;

struct student{
  int id_num;
  char name[10];
};
int main() {
  student mike = {123, {'m', 'i', 'k', 'e', '\0'}};
  student *one = &mike;
  cout << (*one).id_num << " " << (*one).name << endl;
  // 指向运算符 ->
  cout << one->id_num << " " << one->name << endl; // 这一行代码与上一行代码一致，都是现实‘123’以及‘mike’
  return 0;
}
