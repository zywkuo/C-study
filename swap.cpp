#include "swap.h"

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
  swapT(10, 20);
  return 0;
}