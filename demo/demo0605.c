#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
  int z = x + y;
  return z;
}

// 定义标识符常量
// #define MAX 10
int main()
{
  // printf("Hello World!");

  // int num1 = 0;
  // int num2 = 0;
  // int sum = 0;
  // scanf("%d%d", &num1, &num2);
  // sum = num1 + num2;
  // printf("sum = %d\n", sum);

  // const定义常量-不可修改
  // const int num = 2;
  // printf("%d\n", num);

  // 枚举常量
  // enum Sex
  // {
  //   MALE,
  //   FEMALE,
  //   SECRET
  // };
  // enum Sex s = MALE;
  // printf("%d\n", MALE);
  // printf("%d\n", FEMALE);
  // printf("%d\n", SECRET);

  // 字符串
  // char arr1[] = "abc";
  // // printf("%s\n", arr1);
  // // \0字符串结束标志
  // char arr2[] = {'a', 'b', 'c', '\0'};
  // // printf("%s\n", arr2);
  // // strlen  string length 计算字符创长度
  // printf("%zd\n", strlen(arr1));
  // printf("%zd\n", strlen(arr2));

  // 转义字符
  // \t 水平制表符
  // \n 换行
  // printf("abc\n");
  // printf("c:\\test\\test.c\n");
  // printf("%zd\n", strlen("c:\\test\\test.c\n"));

  // if语句
  // int input = 0;
  // printf("你要好好学习嘛？（1/0）？：\n");
  // scanf("%d", &input);
  // if (input == 1)
  //   printf("好孩子\n");
  // else
  //   printf("不好孩子\n");

  // 循环语句
  // int line = 0;
  // while (line < 10)
  // {
  //   printf("写一行代码++：%d\n", line);
  //   line++;
  // };
  // // printf("结束了写了多少代码？：%d\n", line);
  // if (line >= 10)
  //   printf("写完%d了\n", line, "了");

  // 函数
  // int num1 = 10;
  // int num2 = 20;
  // int sum = 0;
  // sum = Add(num1, num2);
  // printf("sum = %d\n", sum);

  return 0;
}
