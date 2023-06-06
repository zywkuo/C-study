#include <stdio.h>
#include <string.h>

int Max(int x, int y)
{
  if (x > y)
    return x;
  else
    return y;
}

void test()
{
  static int a = 1;
  a++;
  printf("a = %d\n", a);
}

int main()
{
  // 求两个数的较大值
  // int num1 = 0;
  // int num2 = 0;
  // int max = 0;
  // scanf("%d%d", &num1, &num2);
  // max = Max(num1, num2);
  // printf("MAX = %d\n", max);

  // sizeof
  // int a = 10;
  // int arr[] = {1, 2, 3, 4, 5, 6};
  // printf("%zd\n", sizeof(a));
  // printf("%zd\n", sizeof(arr));
  // printf("%zd\n", sizeof a);
  // printf("%zd\n", sizeof(int));

  // ++ --
  // int a = 10;
  // int b = a++; // 后置++ 先使用  再++  b=10  a=10
  // int b = ++a; // 前置++ 先++  再使用  b=11  a=11
  // int b = a--; // 后置-- 先使用 在-- a=9 b=10
  // int b = --a; // 前置-- 先-- 在使用 a=9 b=
  // printf("a = %d b = %d\n", a, b);

  // 强制类型装换
  // int a = (int)3.14;
  // printf("a = %d\n", a);

  // 0-假
  // 非0-真

  // 只要是整数，内存中存储的都是二进制的补码
  // 正数：原码、反码、补码相同
  // 负数：补码
  // 原码-------------------------->反码------------------->补码
  // 直接按照正负               原码的符号位不变              反码+1
  // 写出的二进制序列           其他位按位取反得到
  // 列：-2
  // 10000000000000000000000000000010 - 原码
  // 11111111111111111111111111111101 - 反码
  // 11111111111111111111111111111110 - 补码

  // 关键字
  // auto break case char const continue defaule do double else enum
  // extern float for goto if long register return short signed
  // sizeof static struct switch typeddef union unsigned void volatile while

  // typedef - 类型定义 - 类型重定义

  // static 静态局部变量
  // 修饰局部变量，局部变量生命周期变长
  int i = 0;
  while (i < 5)
  {
    test();
    i++;
  }

  return 0;
}
