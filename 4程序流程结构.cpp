#include <iostream>
using namespace std;
#include <ctime>

int main()
{
  // 选择结构
  // if语句
  // int num = 0;
  // cout << "请输入数字：";
  // cin >> num;
  // if (num < 200)
  // {
  //   cout << "小于200" << endl;
  // }
  // else if (num >= 200 && num <= 400)
  // {
  //   cout << "大于等于200并且小于等于400" << endl;
  // }
  // else
  // {
  //   cout << "大于400" << endl;
  // }

  // 三只小猪谁最重
  // int pig1 = 0;
  // cout << "请输入小猪1重量：";
  // cin >> pig1;
  // int pig2 = 0;
  // cout << "请输入小猪2重量：";
  // cin >> pig2;
  // int pig3 = 0;
  // cout << "请输入小猪3重量：";
  // cin >> pig3;
  // if (pig1 > pig2)
  // {
  //   if (pig1 > pig3)
  //   {
  //     cout << "小猪1最重" << endl;
  //   }
  //   else
  //   {
  //     cout << "小猪3最重" << endl;
  //   }
  // }
  // else
  // {
  //   if (pig2 > pig3)
  //   {
  //     cout << "小猪2最重" << endl;
  //   }
  //   else
  //   {
  //     cout << "小猪3最重" << endl;
  //   }
  // }

  // 三目运算
  // int a = 30;
  // int b = 20;
  // int c = 0;
  // c = a > b ? a : b;
  // cout << "最大值为：" << c << endl;

  // swich 语句
  // int snum = 0;
  // cout << "请输入1~5数字：";
  // cin >> snum;
  // switch (snum)
  // {
  // case 5:
  //   cout << "输入5" << endl;
  //   break;
  // case 4:
  //   cout << "输入4" << endl;
  //   break;
  // case 3:
  //   cout << "输入3" << endl;
  //   break;
  // case 2:
  //   cout << "输入2" << endl;
  //   break;
  // case 1:
  //   cout << "输入1" << endl;
  //   break;
  // default:
  //   cout << "输入错误" << endl;
  //   break;
  // }

  // 循环结构

  // while语句
  // int w_num = 0;
  // while (w_num < 10)
  // {
  //   cout << "w_num = " << w_num << endl;
  //   w_num++;
  // }

  // 猜数字
  // srand((unsigned int)time(NULL));
  // int i_rand = rand() % 100 + 1;
  // cout << "随机数已生成，请猜测" << endl;
  // int val = 0;
  // while (1)
  // {
  //   cin >> val;
  //   if (val > i_rand)
  //   {
  //     cout << "猜大了，请重新猜测" << endl;
  //   }
  //   else if (val < i_rand)
  //   {
  //     cout << "猜小了，请重新猜测" << endl;
  //   }
  //   else
  //   {
  //     cout << "猜对了" << endl;
  //     break;
  //   }
  // }

  // do wihile 循环
  // int num = 0;
  // do
  // {
  //   cout << "num = " << num << endl;
  //   num++;
  // } while (num < 10);

  // 水仙花数
  // int num = 100;
  // do
  // {
  //   int gewei = num % 10;
  //   int shiwei = num / 10 % 10;
  //   int baiwei = num / 100;
  //   int zongshu = gewei * gewei * gewei + shiwei * shiwei * shiwei + baiwei * baiwei * baiwei;
  //   if (zongshu == num)
  //   {
  //     cout << "水仙花数：" << num << endl;
  //   }
  //   num++;
  // } while (num <= 999);

  // for 循环
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << i << endl;
  // }

  // 敲桌子
  // for (int i = 1; i <= 100; i++)
  // {
  //   if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
  //   {
  //     cout << "敲桌子： " << i << endl;
  //   }
  //   else
  //   {
  //     cout << i << endl;
  //   }
  // }

  // 嵌套循环
  // for (int i = 0; i < 10; i++)
  // {
  //   for (int j = 0; j < 10; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // 九九乘法表
  // for (int i = 1; i < 10; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {

  //     cout << j << "x" << i << "=" << i * j << "\t";
  //   }
  //   cout << endl;
  // }

  // 跳转语句
  // break 跳出循环，循环终止
  // continue 跳过本次循环，循环不终止
  // for (int i = 0; i < 100; i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     continue;
  //   }
  //   cout << i << endl;
  // }
  // goto 无条件跳转语句
  cout << "1" << endl;
  goto FLAG;
  cout << "2" << endl;
  cout << "3" << endl;
  cout << "4" << endl;
FLAG:
  cout << "5" << endl;

  return 0;
}