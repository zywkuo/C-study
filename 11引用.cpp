#include <iostream>
using namespace std;

// 值传递
void mySwap01(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;

  cout << "mySwap01 a = " << a << endl;
  cout << "mySwap01 b = " << b << endl;
}

// 地址传递
void mySwap02(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  cout << "mySwap02 a = " << *a << endl;
  cout << "mySwap02 b = " << *b << endl;
}

// 引用传递
void mySwap03(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;

  cout << "mySwap03 a = " << a << endl;
  cout << "mySwap03 b = " << b << endl;
}

int &test01()
{
  int a = 10; // 局部变量 栈区
  return a;
}

int &test02()
{
  static int a = 10; // 静态变量 全局区
  return a;
}

void showValue(const int &val)
{
  cout << "val = " << val << endl;
}

int main()
{
  // 引用
  // 给变量起别名
  int a = 10;
  int &b = a;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  b = 100;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // 引用必须初始化
  // 引用在初始化后，不可修改引用，可赋值

  // 引用做函数参数
  int aa = 10;
  int bb = 20;
  // mySwap01(aa, bb);   // 值传递，形参不会修饰实参
  // mySwap02(&aa, &bb); // 地址传递，形参会修饰实参
  mySwap03(aa, bb); // 引用传递，形参会修饰实参

  cout << "aa = " << aa << endl;
  cout << "bb = " << bb << endl;

  // 引用做函数返回值
  // 不要返回局部变量的引用
  int &ref = test01();
  cout << "ref = " << ref << endl;
  cout << "ref = " << ref << endl;
  // 函数的调用 可以作为左值
  int &ref2 = test02();
  cout << "ref2 = " << ref2 << endl;
  test02() = 1000;
  cout << "ref2 = " << ref2 << endl;

  // 引用的本质-指针常量

  // 常量引用：用来修饰形参，防止误操作
  // 引用必须引用合法的内存空间
  int aaa = 10;
  showValue(aaa);
  cout << "aaa = " << aaa << endl;

  return 0;
}