#include <iostream>
using namespace std;
#include <string>

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

  // sizeof 统计数据类型所占内存大小
  cout << "short 所占内存大小" << sizeof(short) << endl;
  cout << "int 所占内存大小" << sizeof(int) << endl;
  cout << "long 所占内存大小" << sizeof(long) << endl;
  cout << "long long 所占内存大小" << sizeof(long long) << endl;
  cout << "float 所占内存大小" << sizeof(float) << endl;
  cout << "double 所占内存大小" << sizeof(double) << endl;
  cout << "char 所占内存大小" << sizeof(char) << endl;
  cout << "string 所占内存大小" << sizeof(string) << endl;
  cout << "bool 所占内存大小" << sizeof(bool) << endl;

  // 浮点型
  // float 单精度
  // double 双精度
  // 默认输出小数最多显示6位有效数字
  float f1 = 3.14f;
  double d1 = 3.14;
  cout << "f1 = " << f1 << endl;
  cout << "d1 = " << d1 << endl;

  // 字符型 char
  // char ch = 'a'; 必须是单引号，一个字符
  char ch = 'a';
  cout << "ch = " << ch << endl;
  cout << "ch对应的ASCLL编码 = " << (int)ch << endl;

  // 转义字符
  // \n 换行
  // \t 水平制表
  // \\  反斜杠\

  // 字符创  双引号
  // c语言风格
  char str1[] = "hello word C";
  cout << "str1 = " << str1 << endl;
  // c++风格
  string str2 = "hello word C++";
  cout << "str2 = " << str2 << endl;

  // 布尔类型bool 占用一个字节
  // true - 1 - 真
  // false - 0 - 假
  bool flag = true;
  cout << "flag = " << flag << endl;

  // 数据输入
  // 用于从键盘获取数据
  // cin >> 变量
  // int a = 0;
  // cout << "请给整形变量a赋值：" << endl;
  // cin >> a;
  // cout << "整形变量a = " << a << endl;

  string str = "hello";
  cout << "请给字符串str赋值：" << endl;
  cin >> str;
  cout << "字符串str = " << str << endl;

  return 0;
}