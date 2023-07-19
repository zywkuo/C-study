#include <iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;

// const 修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;

// new 的基本语法
int *func()
{
  // 利用new关键字 可以将数据开辟到堆区
  // new 返回的是该数据类型的指针
  int *p = new int(10);
  return p;
}

void test01()
{
  int *p = func();
  cout << "test01 *p = " << *p << endl;
  // 堆区数据无法自动释放，要是使用delete 释放
  delete p;
}

// 在堆区利用new开辟数组
void test02()
{
  int *arr = new int[10];
  for (int i = 0; i < 10; i++)
  {
    arr[i] = i + 100;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << endl;
  }

  delete[] arr;
}

int main()
{
  // 内存分区模型
  // C++程序在执行时，将内存大方向划分为4个区域
  // 代码区: 存放函数体的二进制代码，由提作系统进行管理的
  // 全局区: 存放全局变量和静态变是以及常量
  // 栈区: 由编译器自动分配释放,存放函数的参数值,局部变是等   --  不要返回局部变量的地址
  // 堆区: 由程序员分配和释放,若程字员不释放,程序结束时由操作系统回收

  // 局部变量
  int a = 10;
  int b = 10;

  cout << "局部变量地址为：" << (int)(size_t)&a << endl;
  cout << "局部变量地址为：" << (int)(size_t)&b << endl;

  cout << "全局变量地址为：" << (int)(size_t)&g_a << endl;
  cout << "全局变量地址为：" << (int)(size_t)&g_b << endl;

  // 静态变量
  static int s_a = 10;
  static int s_b = 20;

  cout << "静态变量地址为：" << (int)(size_t)&s_a << endl;
  cout << "静态变量地址为：" << (int)(size_t)&s_b << endl;

  // 常量
  // 字符串常量
  cout << "字符串常量地址为：" << (int)(size_t) & "Hello Word" << endl;
  // const 修饰的全局变量
  cout << "const 修饰的全局变量为：" << (int)(size_t)&c_g_a << endl;
  cout << "const 修饰的全局变量为：" << (int)(size_t)&c_g_b << endl;
  // const 修饰的局部变量
  const int c_l_a = 10;
  const int c_l_b = 10;
  cout << "const 修饰的局部变量为：" << (int)(size_t)&c_l_a << endl;
  cout << "const 修饰的局部变量为：" << (int)(size_t)&c_l_b << endl;

  // 堆区开辟数据
  int *p = func();
  cout << *p << endl;
  cout << *p << endl;

  // new操作符--在堆区开辟数据
  test01();

  test02();

  return 0;
}