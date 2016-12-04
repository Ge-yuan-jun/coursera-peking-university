### 一、c++程序到c程序的编译

C++程序：
```
class CCar {
  public:
    int price;
    void SetPrice(int p);
};

void CCar::SetPrice(int p) {
  price = p;
}

int main() {
  CCar car;
  car.SetPrice(20000);
  return 0;
}
```

C程序：
```
struct CCar {
  int price;
};

void SetPrice(struct CCar * this, int p) {
  this->price = p;
}

int main() {
  struct CCar car;
  SetPrice( & car, 20000);
  return 0;
}
```

### 二、this指针作用

其作用就是指向成员函数所作用的对象。

1. 非静态成员函数中可以直接使用`this`来代表指向该函数作用的对象的指针。
```
class Complex {
  public:
    double real, imag;
    void Print() {cout << real << "," << imag;}
    Complex(double r, double i):real(r),imag(i) { }
    Complex AddOne() {
      this->real++; // 等价于 real++
      this->Print(); // 等价于Print
      return * this;
    }
};

int main() {
  Complex c1(1, 1),c2(0,0);
  c2 = c1.AddOne(); // 输出 2,1
  return 0;
}
```

### 三、`this`指针和静态成员函数

静态成员函数不能使用`this`指针

因为静态成员函数并不具体作用于某个对象

因此，静态成员函数的真实的参数的个数，就是程序中写出的参数个数。
