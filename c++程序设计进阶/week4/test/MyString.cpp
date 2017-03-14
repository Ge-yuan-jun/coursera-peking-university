#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
// 在此处补充你的代码
class MyString:public string {
public:
  MyString():string(){};
  Mystring(const char *s):string(s){};
  MyString(const string &s):string(s){};
  MyString operator()(int i, int j) { return this->substr(i, j); }
};
int CompareString(const void *e1, const void *e2) {
  MyString *s1 = (MyString *)e1;
  MyString *s2 = (MyString *)e2;
  if (*s1 < *s2)
    return -1;
  else if (*s1 == *s2)
    return 0;
  else if (*s1 > *s2)
    return 1;
}
int main() {
  MyString s1("abcd-"), s2, s3("efgh-"), s4(s1);
  MyString SArray[4] = {"big", "me", "about", "take"};
  cout << "1. " << s1 << s2 << s3 << s4 << endl;
  s4 = s3;                        // efgh-
  s3 = s1 + s3;                   // abcd-efgh-
  cout << "2. " << s1 << endl;    // abcd-
  cout << "3. " << s2 << endl;    // 空
  cout << "4. " << s3 << endl;    // abcd-efgh-
  cout << "5. " << s4 << endl;    // efgh-
  cout << "6. " << s1[2] << endl; // c
  s2 = s1;                        // abcd-
  s1 = "ijkl-";                   // ijkl-
  s1[2] = 'A';                    // ijAl-
  cout << "7. " << s2 << endl;    // abcd-
  cout << "8. " << s1 << endl;    // ijAl-
  s1 += "mnop";                   // ijAk-mnop
  cout << "9. " << s1 << endl;    // ijAl-mnop
  s4 = "qrst-" + s2;              // qrst-abcd-
  cout << "10. " << s4 << endl;   // qrst-abcd-
  s1 = s2 + s4 + " uvw " + "xyz"; // abcd-qrst-abcd- uvw xyz
  cout << "11. " << s1 << endl;   // abcd-qrst-abcd- uvw xyz
  qsort(SArray, 4, sizeof(MyString), CompareString);
  for (int i = 0; i < 4; ++i)
    cout << SArray[i] << endl; // about big me take
  //输出s1从下标0开始长度为4的子串
  cout << s1(0, 4) << endl; // abcd-
  //输出s1从下标为5开始长度为10的子串
  cout << s1(5, 10) << endl; // qrst-abcd-
  return 0;
}
