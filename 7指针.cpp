#include <iostream>
using namespace std;

// 指针的作用--可以通过指针间接访问内存

// 指针和函数
void swap01(int a, int b);
void swap02(int *p1, int *p2);
void bubbleSort(int *arr, int len);
void printArray(int *arr, int len);

int main()
{
  // 定义指针
  int a = 10;
  int *p = &a;
  cout << "a的地址为: " << &a << endl;
  cout << "指针p为: " << p << endl;

  // 使用指针 通过解引用方式
  *p = 1000;
  cout << "a = : " << a << endl;
  cout << "*p = : " << *p << endl;

  // 指针所占内存空间大小  32位四个字节   64位8个字节  不论类型
  cout << "int* 所占空间大小为 : " << sizeof(int *) << endl;
  cout << "float* 所占空间大小为 : " << sizeof(float *) << endl;
  cout << "double* 所占空间大小为 : " << sizeof(double *) << endl;
  cout << "string* 所占空间大小为 : " << sizeof(string *) << endl;

  // 空指针
  // 空指针用于给指针变量进行初始化 编号为0
  // 空指针是不可以进行访问 0-255 之间内存编号系统占用，不可访问
  // int *pp = NULL;

  // 野指针
  // 指针变量指向指向非法的内存空间

  // 空指针 野指针 都不要访问

  // const 修饰指针
  int b = 10;
  int c = 20;
  // 1、const 修饰指针 常量指针
  // 指针的指向可以修改，指针指向的值不可修改
  const int *pp = &a;
  // *pp = 20; 错误
  pp = &b; // 正确

  // 2、const 修饰常量 指针常量
  // 指针的指向不可修改 指针指向的值可以修改
  int *const ppp = &a;
  *ppp = 20; // 正确
  // ppp = &b; 错误

  // 3、const 修饰指针和常量 既修饰指针，又修饰常量
  // 指针的指向和指针指向的值都不可修改
  const int *const pppp = &a;

  // 指针和数组
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "第一个元素为：" << arr[0] << endl;
  int *ppppp = arr; // arr就是数组首地址
  cout << "利用指针访问第一个元素：" << *ppppp << endl;
  ppppp++; // 让指针向后便宜4个字节
  cout << "利用指针访问第二个元素：" << *ppppp << endl;

  cout << "指针便利数组" << endl;
  int *p2 = arr;
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << "指针访问第" << i + 1 << "个元素为：" << *p2 << endl;
    p2++;
  }

  // 1、值传递
  // 不修改实参
  int a2 = 10;
  int b2 = 20;
  swap01(a2, b2);
  cout << "a2 = " << a2 << endl;
  cout << "b2 = " << b2 << endl;
  // 2、地址传递
  // 地址传递会修改实参
  swap02(&a2, &b2);
  cout << "a2 = " << a2 << endl;
  cout << "b2 = " << b2 << endl;

  // 指针、数组、函数
  int arr1[] = {2, 5, 8, 3, 1, 6, 7, 9, 4};
  bubbleSort(arr1, 9);
  printArray(arr1, 9);
  return 0;
}

void swap01(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;

  cout << "swap01 a = " << a << endl;
  cout << "swap01 b = " << b << endl;
}

void swap02(int *p1, int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void bubbleSort(int *arr, int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printArray(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << arr[i];
  }
  cout << endl;
}