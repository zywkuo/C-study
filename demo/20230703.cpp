#include <iostream>
using namespace std;

int main()
{

  // 整形
  // short 短整型 2字节 (-32768 ~ 32767)
  short num1 = 10;
  cout << "num1 = " << num1 << endl;
  // int 整形 4字节 ()
  int num2 = 10;
  cout << "num2 = " << num2 << endl;
  // long 长整形 win 4字节   linux（32位4字节、64位8字节）
  long num3 = 10;
  cout << "num3 = " << num3 << endl;
  // longlong 长长整形 8字节
  long long num4 = 10;
  cout << "num4 = " << num4 << endl;
  return 0;
}