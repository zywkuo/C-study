#include <iostream>
using namespace std;
#include "swap.h"

int sum(int a, int b)
{
  return a + b;
}

// 不需要返回值 void
void swap(int num1, int num2)
{
  cout << "交换前：" << num1 << "  " << num2 << endl;
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "交换后：" << num1 << "  " << num2 << endl;
}

// 无参无反
void test01()
{
  cout << "this is test01" << endl;
}

// 有参无返
void test02(int a)
{
  cout << "this is test02 a = " << a << endl;
}

// 无参有返
int test03()
{
  cout << "this is test 03" << endl;
  return 10000;
}

// 有参有返
int test04(int a)
{
  cout << "this is test 04 a = " << a << endl;
  return a;
}

// 函数的声明
// 提前告诉编译器函数存在，声明可以多次，定义只可一次
// 声明
int max(int a, int b);
int max(int a, int b);

// 函数的分文件编写
// 1. 创建后缀名为 .h 的头文件
// 2. 创建后缀名为 .cpp 的源文件
// 3. 在头文件中写函数的声明
// 4. 在源文件中写函数的定义
// 例子 swap.h swap.cpp
// 函数的定义
void swapT(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

int main()
{
  int c = sum(1, 2);
  int d = sum(10, 20);
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  swap(100, 200);
  test01();
  test02(2);
  int e = test03();
  cout << "e = " << e << endl;
  int f = test04(100);
  cout << "f = " << f << endl;
  cout << max(10, 20) << endl;
  swapT(10, 20);
  return 0;
}

// 定义函数
int max(int a, int b)
{
  return a > b ? a : b;
}