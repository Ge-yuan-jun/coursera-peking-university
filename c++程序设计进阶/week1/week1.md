### 一、引用
类型名 & 引用名 = 某变量名
```c++
int n = 4;
int &r = n; // r引用了n， r的类型是 int &
```

某个变量的引用，等价于这个变量，相当于该变量的一个别名。所以，引用值改变，则被引用的变量也改变（类似于js中的对象引用）

定义引用时，一定要将其×××初始化×××成引用某个变量

初始化后，它就一直引用该变量，不会再引用别的变量了。

引用只能引用变量，不能引用常量跟表达式

引用示例：交换两个整型变量值的函数
```c++
void swap(int *a, int *b) {
    int temp;
    tmp = *a;
    *a = *b;
    *b = tmp;
} 
int n1,n2;
swap(&n1, &n2);
```

上面的写法有效果，但是很丑陋。看引用的用法：
```c++
void swap(int & a, int & b) {
    int temp;
    tmp = a;
    a = b;
    b = tmp;
} 
int n1,n2;
swap(&n1, &n2);
```
引用作为函数的返回值：
```c++
int n = 4;
int & SetValue() {return n;}
int main() {
    SetValue() = 40;
    cout << n; // 40
    return 0;
}
```
##### 常引用
定义引用时，前面加`const`关键字，即为“常引用”

int n;
const int & r = n;
