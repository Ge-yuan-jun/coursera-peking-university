#include<iostream>
#include<string.h>

using namespace std;

// 创建代表学生的类
class StuInfo {
  private:
    char stuName[100], stuNum[100];
    int age, grade[4];
    void Init(char _stuName, char _stuNum, int _age, int _grade) {
      for (int i = 0; i < _stuNum.length; i++) {
        stuName[i] = _stuName[i];
      }
      for (int i = 0; i < _stuNum.length; i++) {
        stuNum[i] = _stuNum[i];
      }
      for (int i = 0; i < _grade.length; i++) {
        grade[i] = _grade[i];
      }
      age = _age;
    }
    void average() {
      return (grade[0] + grade[1] + grade[2] + grade[3]) / 4;
    }
    void getName() {
      return stuName;
    }
    void getNum() {
      return stuNum;
    }
    void getAge() {
      return age;
    }
};

int main() {
  StuInfo Student;

  char stuName[100], stuNum[100], mark;
  int age, grade[4];
  cin.getLine(stuName, 100, ','); // 以逗号隔开
  cin >> age;
  cin.getLine(stuNum, 100, ',');
  cin >> grade[0] >> mark >> grade[1] >> mark >> grade[2] >> mark >> grade[3];

  Student.Init(stuName, stuNum, age, grade);
  cout << Student.getName() << ',' << Student.getAge() << "," << Student.getNum() << "," << Student.average() << endl; 
  return 0;
}
