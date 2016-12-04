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
