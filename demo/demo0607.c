#include <stdio.h>
#include <string.h>

// 结构体---描述复杂对象
struct Book
{
  /* data */
  char name[20];
  short price;
};

int main()
{

  // 指针 32位4个字节  64位8个字节
  // int a = 10; // 4个字节
  // // &a;  取地址
  // int *p = &a; // 指针变量----专门用来存放地址

  // printf("%p\n", &a);
  // printf("%p\n", p);

  // *p = 20; // *  解引用操作符
  // printf("a = %d\n", a);

  // char ch = 'z';
  // char *pc = &ch;
  // *pc = 'w';
  // printf("%c\n", ch);
  // printf("%zd\n", sizeof(pc));

  // double d = 3.14;
  // double *pd = &d;
  // *pd = 5.6;
  // printf("%lf\n", d);
  // printf("%lf\n", *pd);

  // 结构体
  // .  结构体变量.成员
  // -> 结构体指针->成员
  // struct Book b1 = {"C语言", 66};
  // printf("书名：%s\n", b1.name);
  // printf("价格：%d\n", b1.price);
  // // strcpy string-copy 字符串拷贝
  // strcpy(b1.name, "C++");
  // b1.price = 88;
  // printf("修改后价格：%d\n", b1.price);
  // struct Book *pb = &b1;
  // printf("书名：%s\n", (*pb).name);
  // printf("价格：%d\n", (*pb).price);
  // printf("书名：%s\n", pb->name);
  // printf("价格：%d\n", pb->price);

  // 分支语句和循环语句
  // int age = 29;
  // if (age < 18)
  //   printf("未成年\n");
  // else if (age >= 18 && age < 29)
  //   printf("青年\n");
  // else
  //   printf("成年\n");

  // if (age < 18)
  // {
  //   printf("未成年\n");
  // }
  // else
  // {
  //   printf("成年\n");
  // }

  // int a = 0;
  // int b = 2;
  // if (a == 1)
  //   if (b == 2)
  //     printf("hehe\n");
  //   else
  //     printf("haha\n");

  // 常量放左侧
  // int num = 4;
  // if (5 == num)
  // {
  //   printf("hehe\n");
  // }

  // 输出1-100奇数
  // int i = 0;
  // while (i <= 100)
  // {
  //   if (i % 2 != 0)
  //   {
  //     printf("奇数为：%d", i);
  //   }
  //   i++;
  // }

  // swicth 语句
  // case 为整形常量表达式
  // int day = 0;
  // scanf("%d", &day);
  // switch (day)
  // {
  // case 1:
  //   printf("星期1\n");
  //   break;
  // case 2:
  //   printf("星期2\n");
  //   break;
  // case 3:
  //   printf("星期3\n");
  //   break;
  // case 4:
  //   printf("星期4\n");
  //   break;
  // case 5:
  //   printf("星期5\n");
  //   break;
  // case 6:
  //   printf("星期6\n");
  //   break;
  // case 7:
  //   printf("星期7\n");
  //   break;
  // default:
  //   printf("请输入1-7数字\n");
  //   break;
  // }
  // switch (day)
  // {
  // case 1:
  // case 2:
  // case 3:
  // case 4:
  // case 5:
  //   printf("工作日\n");
  //   break;
  // case 6:
  // case 7:
  //   printf("休息日\n");
  //   break;
  // default:
  //   printf("请输入1-7数字\n");
  //   break;
  // }

  // 循环语句
  // break 永久终止循环
  // continue 终止本次循环
  // int i = 1;
  // while (i <= 10)
  // {
  //   if (i == 5)
  //   {
  //     // break; // 1 2 3 4 程序结束
  //     continue; // 1 2 3 4 程序未结束
  //   }
  //   printf("%d\n", i);
  //   i++;
  // }

  // int ch = getchar();
  // putchar(ch);
  // printf("%c\n", ch);

  // int ch = 0;
  // // EOF----->end of file----->-1
  // while ((ch = getchar()) != EOF)
  // {
  //   putchar(ch);
  // }

  // while语句
  // int ch = 0;
  // while ((ch = getchar()) != EOF)
  // {
  //   putchar(ch);
  // }

  // int ret = 0;
  // int ch = 0;
  // char password[20] = {0};
  // printf("请输入密码：");
  // scanf("%s", password);
  // // 输入密码回车后getchar会直接读取\n,需要使用先使用getchar消除\n
  // while ((ch = getchar()) != '\n')
  // {
  //   ;
  // }
  // printf("请确认y/n:");
  // ret = getchar();
  // if (ret == 'y')
  // {
  //   printf("确认");
  // }
  // else
  // {
  //   printf("不确认");
  // }

  int ch = 0;
  while ((ch = getchar()) != EOF)
  {
    if (ch < '0' || ch > '9')
    {
      continue;
    }

    putchar(ch);
  }

  return 0;
}