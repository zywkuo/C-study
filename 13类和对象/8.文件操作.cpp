#include <iostream>
using namespace std;
#include <fstream>

// 文件类型
// 文本文件
// 二进制文件

// ofstream 写操作
// ifstream 读操作
// fstream 读写操作

// 文件打开方式:
// 打开方式
// ios:in           为读文件而打开文件
// ios::out         为写文件而打开文件
// ios::ate         初始位置:文件尾
// ios:app          追加方式写文件
// ios::trunc       如果文件存在先删除，再创建
// ios::binary      进制方式
// 多种使用 | 操作位

// 文本文件方式
void test01()
{
  // 写文件
  ofstream ofs;
  ofs.open("文件操作.txt", ios::out);
  ofs << "这是一段话！！！" << endl;
  ofs << "这是一段话！！！" << endl;
  ofs << "这是一段话！！！" << endl;
  ofs.close();
};

void test02()
{
  // 读文件
  ifstream ifs;
  ifs.open("文件操作.txt", ios::in);

  // 判断是否打开成功
  if (!ifs.is_open())
  {
    cout << "文件打开失败！" << endl;
    return;
  }

  // 读数据
  // 方式 1
  // char buf1[102] = {0};
  // while (ifs >> buf1)
  // {
  //   cout << buf1 << endl;
  // }

  // 方式二
  // char buf2[1024] = {0};
  // while (ifs.getline(buf2, sizeof(buf2)))
  // {
  //   cout << buf2 << endl;
  // }

  // 方式三
  string buf3;
  while (getline(ifs, buf3))
  {
    cout << buf3 << endl;
  };

  // 方式四
  // char c;
  // while ((c = ifs.get()) != EOF)
  // {
  //   cout << c;
  // }

  ifs.close();
};

// 二进制方式
class Person
{
public:
  char m_Name[64];
  int m_Age;
};
void test03()
{
  // 写文件
  // ofstream ofs;
  // ofs.open("文件操作二进制.txt", ios::out | ios::binary);
  ofstream ofs("文件操作二进制.txt", ios::out | ios::binary);
  Person p = {"张三", 18};
  ofs.write((const char *)&p, sizeof(Person));
  ofs.close();
};

void test04()
{
  // 读文件
  ifstream ifs("文件操作二进制.txt", ios::in | ios::binary);
  // 判断是否打开成功
  if (!ifs.is_open())
  {
    cout << "文件打开失败！" << endl;
    return;
  }
  Person p;
  ifs.read((char *)&p, sizeof(Person));
  cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
  ifs.close();
};

int main()
{
  test01();
  test02();
  test03();
  test04();
  return 0;
};