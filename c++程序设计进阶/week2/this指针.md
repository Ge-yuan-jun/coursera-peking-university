### 一、c++程序到c程序的编译

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
