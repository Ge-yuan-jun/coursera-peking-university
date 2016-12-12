/**
 * 描述
 * 下面程序的输出是：
 * 3+4i
 * 5+6i
 * 请补足Complex类的成员函数。不能加成员变量。
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    Complex & operator=(string s) {
      int pos = s.find("+", 0);
      string real = s.substr(0, pos);
      string imag = s.substr(pos + 1, s.length() - pos -2);
      r = atof(real.c_str());
      i = atof(imag.c_str());
      return * this;
    }
};

char * String::operator = (const char * s){
  string temp;
  s >> temp;
  int pos = temp.find("+", 0);
  string sTemp = temp.substr(0, pos);
  r = atof(sTemp.c_str());
  sTemp = temp.substr(pos + 1, temp.length()-pos-2);
  i = atof(sTemp.c_str());
}

int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}
