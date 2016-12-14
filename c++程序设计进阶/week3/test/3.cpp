/**
  描述

  写一个二维数组类 Array2,使得下面程序的输出结果是：

  0,1,2,3,

  4,5,6,7,

  8,9,10,11,

  next

  0,1,2,3,

  4,5,6,7,

  8,9,10,11,
 */

#include <cstring>
#include <iostream>
using namespace std;

class Array2 {
private:
  int row, column;
  int *a;

public:
  // 构造函数
  Array2() { a = NULL; }
  // 不需要设置默认值
  Array2(int r = 0, int c = 0) {
    row = r;
    column = c;
    a = new int[r * c];
  }
  Array2(Array2 &arr) {
    row = arr.row;
    column = arr.column;
    a = new int[row * column];
    memcpy(a, arr.a, sizeof(int) * row * column);
  }

  // 运算符重载
  Array2 &operator=(const Array2 &t) {
    if (a != NULL)
      delete[] a;
    row = t.row;
    column = t.column;
    a = new int[row * column];
    memcpy(a, t.a, sizeof(int) * row * column);
    return *this;
  }

  // 析构函数
  ~Array2() {
    if (a != NULL)
      delete[] a;
  }

  // 将返回值设为int的指针，则可以应用第二个[]，不用重载第二个[]操作符
  int *operator[](int i) { return a + i * column; }

  // 注意符号是 & 而不是 *
  int &operator()(int i, int j) { return a[i * column + j]; }
};

int main() {
  Array2 a(3, 4);
  int i, j;
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; j++)
      a[i][j] = i * 4 + j;
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; j++) {
      cout << a(i, j) << ",";
    }
    cout << endl;
  }
  cout << "next" << endl;
  Array2 b;
  b = a;
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; j++) {
      cout << b[i][j] << ",";
    }
    cout << endl;
  }
  return 0;
}
