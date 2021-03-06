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
```
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
```
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
```
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

```
int n;
const int & r = n;
```

### 二、常量
1. 定义常量
2. 定义常量指针
    - 不可以通过常量指针修改其指向的内容
    - 不能把常量指针赋值给非常量指针，反过来可以

    ```
    const int * p1;int * p2;
    p1 = p2;    // ok
    p2 = p1;    // error
    p2 = (int *)p1; // ok,强制类型转换
    ```
    - 函数参数为常量指针时，可避免函数内部不小心改变参数指针所指地方的内容
    ```
    void MyPrintf ( const char * p ) {
        strcpy(p, "this"); // 编译出错
        printf("%s", p); // ok
    }
    ```


### 三、动态内存分配
1. 用`new`运算符实现动态内存分配

  -  第一种用法：分配一个变量
  ```
  P = new T;
  ```
  T是任意**类型名**，P是类型为 **T *** 的指针
  动态分配出一块大小为 `sizeof(T)` 字节的内存空间，并且将该内存空间的**起始地址**赋值给`P`，比如：

  ```
  int * pn;
  pn = new int;
  * pn = 5;
  ```

  - 第二种用法：分配一个数组
  ```
  P = new T[N];
  ```
  T: 任意**类型名**
  P：类型为 **T *** 的指针
  N：要分配的数组元素的个数，可以使整型**表达式**

  动态分配出一片大小为`N * sizeof(T)`字节的内存空间，并且将该内存空间的**起始地址**赋值给`P`

  ```
  int * pn;
  int i = 5;
  pn = new int[i * 20];
  pn[0] = 20;
  pn[100] = 30; // 编译没问题，运行时导致数组越界
  ```

  - `new`运算符的返回值类型

  ```
  new T;
  new T[n];
  ```

  这两个返回式的表达式类型都是 `T *`

  `int * p = new int;`

2. 用`delete`运算符释放动态分配的内存

  - 用`new`动态分配的内存空间，一定要`delete`运算符进行释放

  `delete`指针：该指针必须指向`new`出来的空间

  ```
  int * p = new int;
  * p = 5;
  delete p;
  delete p; // 导致异常，一片空间不能被delete多次
  ```

  - 用`delet`释放动态分配的数组，要加`[]`

  `delete []`指针：该指针必须指向`new`出来的数组

  ```
  int * p = new int[20];
  p[0] = 1;
  delete [] p;
  ```

### 四、内联函数和重载函数

#### a、内联函数

函数调用是有时间开销的。如果函数本身只有几句语句，执行非常快，而且函数被反复执行很多次，相比之下调用函数所产生的这个开销就会显得比较大。

为了减少函数调用的开销，引入了内联函数机制。编译器处理对内联函数的调用语句时，是将整个函数的代码插入到调用语句处，而不会产生调用函数的语句

在函数定义前面加“`inline`”关键字，可定义内联函数

```
inline int Max(int a, int b) {
  if (a > b) return a;
  return b;
}
```

#### b、函数重载

一个或多个函数，名字相同，然而参数个数或参数类型不相同，这就叫做函数的重载

一下三个函数时重载关系：
```
int Max(double f1, double f2){}
int Max(int n1, int n2){}
int Max(int n1, int n2, int n3){}
```

函数重载使得函数命名变得简单

编译器根据调用语句中的实参的个数和类型判断应该调用哪个函数

### 五、函数的缺省参数

C++中，定义函数的时候可以让**最右边的连续若干个**参数有**缺省值**，那么调用函数的时候，若相应位置不写参数，参数就是**缺省值**

`void func(int x1, int x2 = 2, int x3 = 3){}`

```
func(10) // 等效于 func(10,2,3)
func(10, 8) // 等效于 func(10,8,3)
func(10,,8) // 不行，只能最后边的连续若干个参数缺省
```

函数参数可缺省的目的在于提高程序的可拓展性

即如果某个写好的函数需要添加新的参数，而原先那些调用该函数的语句，未必需要使用新增的参数，那么为了避免对原先那些函数调用语句的修改，就可以使用缺省参数

### 六、面向对象程序设计方法
### a、结构化程序设计的问题

1. 理解难
2. 修改难
3. 查错难
4. 重用难

### b、业界需要面向对象

面向对象的程序设计方法

面向对象的程序 = 类 + 类 + ... + 类

设计程序的过程 -> 设计类的过程

一类事物 -(抽象)> 共同属性（数据结构）+ 行为（函数） -(封装)> 类（data + function）

类的定义：
```
class 类名
{
  访问范围说明符：
    成员变量1
    成员变量2
    ...
    成员函数声明1
    成员函数声明2

  访问范围说明符：
    更多成员变量
    更多成员函数声明
    ...
};
```

### 七、类的示例以及类的访问
```
class CRectangle {
  public:
    int w,h;
    void Init(int w_, int h_) {
      w = w_;h = h_;
    }
    int Area() {
      return w * h;
    }
    int Perimeter() {
      return 2 * ( w + h);
    }
}; // 必须存在分号
```

使用方法：
```
int main() {
  int w, h;
  CRectangle r; // r是一个对象
  cin >> w >> h;
  r.Init(w, h);
  cout << r.Area() << r.Perimeter();
  return 0;
}
```

类定义的变量 -> 类的实例 -> 对象

对象的内存分配

对象的内存空间
- 对象的大小 = 所有成员变量的大小之和
- eg. CRectangle类的对象， sizeof(CRectangle) = 8

每个对象各有自己的存储空间
- 一个对象的某个成员变量被改变，不会影响到其它的对象

对象之间可以用 '=' 进行赋值

不能用'==', '!=', '>', '<', '>=', '<='进行比较
- 除非这些运算符经过了“重载”

访问类的成员变量和成员函数
1. 用法1：对象名.成员名 `CRectangle r1, r2; r1.w = 5; r2.Init(3,4);`
2. 用法2：指针 -> 成员名
```
CRectangle r1, r2;
CRectangle * p1 = &r1;
CRectangle * p2 = &r2;
p1->w = 5;
p2->Init(3, 4); //Init作用在p2指向的对象上
```
3. 用法3：引用名.成员名
```
CRectangle r2;
CRectangle & rr = r2;
rr.w = 5;
rr.Init(3, 4); //rr的值变了，r2的值也变
```

另一种输出结果的方式：
```
void PrintRectangle(CRectangle & r) {
  cout << r.Area() << "," << r.Perimeter();
}
CRectangle r3;
r3.Init(3,4);
PrintRectangle(r3);
```

##### 类的成员函数的另一种写法
成员函数体和类的定义分开写
```
class CRectangle {
  public:
    int w, h;
    int Area(); // 成员函数仅在此处声明
    int Perimeter();
    void Init(int w_, int h_);
}

int CRectangle::Area() {
  return w * h;
}
int CRectangle::Perimeter() {
  return 2 * (w + h);
}
void CRectangle::Init(int w_, int h_) {
  w = w_; h =h _;
}
```

调用通过：对象、对象的指针、对象的引用

*程序运行期间，一个对象的存储空间内部并没有包含成员函数的指令*

### 八、类成员的可访问范围
对象成员的访问权限
1. 定义一个类
```
class className {
  private:
    私有属性和函数
  public:
    公有属性和函数
  protected:
    保护属性和函数
};
```

缺省为私有成员
```
class Man {
    int nAge; // 私有成员
    char szName[20]; // 私有成员
  public:
    void SetName(char * Name) {
      strcpy(szName, Name);
    }
};
```

类的成员函数内部，可以访问：
1. 当前对象的全部属性，函数
2. 同类其他对象的全部属性，函数

类的成员函数以外的地方：
1. 只能够访问该类对象的公有成员

举个例子：
```
class CEmployee {
  private:
    char szName[30]; // 名字
  public:
    int salary; // 工资
    void setName(char * name);
    void getName(char * name);
    void averageSalary(CEmployee e1, CEmployee e2);
};
void CEmployee::setName(char * name) {
  strcpy(szName, name); // ok
}
void CEmployee::getName(char * name) {
  strcpy(name, szNamw); // ok
}
void CEmployee::averageSalary(CEmployee e1, CEmployee e2) {
  salary = (e1.salary + e2.salary)/2;
}
int main() {
  CEmployee e;
  strcpy(e.szName, "Tom123456789"); // 编译错，不能访问私有成员
  e.setName("Tom"); // ok
  e.salary = 5000; // ok
  return 0;
}
```

设置私有成员的目的
1. 强制对成员变量的访问一定要通过成员函数进行

设置私有成员的机制 -- 隐藏

**注意：**
1. 一个类只能定义一个析构函数，但可以定义多个构造函数
2. 对于通过`new`运算符生成的对象，执行`delete`操作时才能析构
3. 对类`A`的定义正确的是：
```
class A {
  int v;
  A * next;
  void Func() {}
};
```
