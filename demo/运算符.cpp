#include <iostream>
using namespace std;

int main()
{

  // 算数运算符
  int a1 = 10;
  int a2 = 3;
  cout << "+ " << a1 + a2 << endl;
  cout << "- " << a1 - a2 << endl;
  cout << "* " << a1 * a2 << endl;
  cout << "/ " << a1 / a2 << endl;
  cout << "% " << a1 % a2 << endl;
  // 前置递增 先加后赋值
  // 后置递增 先赋值在加
  cout << "++ " << ++a1 << endl;
  cout << "-- " << --a2 << endl;

  // 赋值运算符
  int b1 = 2;
  b1 = 20;
  cout << "b1 = " << b1 << endl;
  b1 += 2;
  cout << "b1 += " << b1 << endl;
  b1 -= 2;
  cout << "b1 += " << b1 << endl;
  b1 *= 2;
  cout << "b1 *= " << b1 << endl;
  b1 /= 2;
  cout << "b1 /= " << b1 << endl;
  b1 %= 2;
  cout << "b1 %= " << b1 << endl;

  // 比较运算符
  int c1 = 10;
  int c2 = 20;
  cout << "c1 == c2 ? " << (c1 == c2) << endl;
  cout << "c1 != c2 ? " << (c1 != c2) << endl;
  cout << "c1 > c2 ? " << (c1 > c2) << endl;
  cout << "c1 > c2 ? " << (c1 < c2) << endl;
  cout << "c1 >= c2 ? " << (c1 >= c2) << endl;
  cout << "c1 <= c2 ? " << (c1 <= c2) << endl;

  // 逻辑运算符
  int d1 = 10;
  int d2 = 20;
  cout << "! " << !d1 << endl;
  cout << "&& " << (d1 && d2) << endl;
  cout << "|| " << (d1 || d2) << endl;

  return 0;
}