#include <iostream>
using namespace std;

// 函数默认参数 默认参数位后面的位数都要有默认参数
int func(int a, int b = 20, int c = 30)
{
  return a + b + c;
}

// 函数声明和实现只能一个有默认参数
int func2(int a = 10, int b = 10);
int func2(int a, int b)
{
  return a + b;
}

void func3(int a, int, int b)
{
  cout << "func3 " << a << " " << b << endl;
}

void func4()
{
  cout << "func4" << endl;
}

void func4(int a)
{
  cout << "func4-int" << endl;
}
void func4(double a)
{
  cout << "func4-double" << endl;
}

void func5(int &a)
{
  cout << "func5-&a" << endl;
}

void func5(const int &a)
{
  cout << "func5-const&a" << endl;
}

void func6(int a, int b = 10)
{
  cout << "func6-1" << endl;
}

void func6(int a)
{
  cout << "func6-2" << endl;
}

int main()
{
  // 函数提高
  cout << func(10, 10) << endl;
  cout << func2(100, 10) << endl;

  // 函数占位参数
  func3(10, 10, 10);

  // 函数重载
  // 函数名称可以相同 需满足下面条件
  // - 统一作用域下
  // - 函数名相同
  // - 函数参数 类型不同或者个数不同或者顺序不同
  // （函数的返回值不可作为函数重载的条件）
  func4();
  func4(10);
  func4(3.14);

  // 函数重载注意事项
  // 引用作为重载条件
  int a = 10;
  func5(a);
  func5(10);
  // 函数重载碰到默认参数
  // func6(10); 异常
  func6(10, 10);
  return 0;
}