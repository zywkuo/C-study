#include <iostream>
using namespace std;

class Person1
{
public:
  // 加号运算符重载 方式一 成员函数重载
  // Person1 operator+(Person1 &p)
  // {
  //   Person1 temp;
  //   temp.m_A = this->m_A + p.m_A;
  //   temp.m_B = this->m_B + p.m_B;
  //   return temp;
  // }

  int m_A;
  int m_B;
};

// 加号运算符重载 方式二 全局函数重载
Person1 operator+(Person1 &p1, Person1 &p2)
{
  Person1 temp;
  temp.m_A = p1.m_A + p2.m_A;
  temp.m_B = p1.m_B + p2.m_B;
  return temp;
}

void test01()
{
  Person1 p1;
  p1.m_A = 10;
  p1.m_B = 10;

  Person1 p2;
  p2.m_A = 10;
  p2.m_B = 10;

  Person1 p3 = p1 + p2;
  cout << "p3.m_A = " << p3.m_A << endl;
  cout << "p3.m_B = " << p3.m_B << endl;
};

class Person2
{
public:
  int m_A;
  int m_B;
};

// 只能全局函数重载左移运算符
ostream &operator<<(ostream &cout, Person2 &p)
{
  cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
  return cout;
};

void test02()
{
  Person2 p;
  p.m_A = 10;
  p.m_B = 10;

  cout << p << endl;
};

class MyInteger
{
  friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
  MyInteger()
  {
    m_Num = 0;
  };

  // 重载前置++运算符
  MyInteger &operator++()
  {
    m_Num++;
    return *this;
  };

  // 重载后置++运算符
  MyInteger operator++(int) // int 代表占位参数，可以用于区分前置和后置递增
  {
    MyInteger temp = *this;
    m_Num++;
    return temp;
  };

private:
  int m_Num;
};

ostream &operator<<(ostream &cout, MyInteger myint)
{
  cout << myint.m_Num;
  return cout;
};

void test03()
{
  MyInteger myint;
  cout << myint++ << endl;
};

class Person4
{
public:
  Person4(int age)
  {
    m_Age = new int(age);
  }

  ~Person4()
  {
    if (m_Age != NULL)
    {
      delete m_Age;
      m_Age = NULL;
    }
  }

  Person4 &operator=(Person4 &p)
  {
    // 编译器是提供浅拷贝
    // m_Age = p.m_Age;
    if (m_Age != NULL)
    {
      delete m_Age;
      m_Age = NULL;
    }

    // 深拷贝
    m_Age = new int(*p.m_Age);

    // 返回对象本身
    return *this;
  };

  int *m_Age;
};

void test04()
{
  Person4 p1(18);
  Person4 p2(20);

  p2 = p1;

  cout << "p1年龄为：" << *p1.m_Age << endl;
  cout << "p2年龄为：" << *p2.m_Age << endl;
};

class Person5
{

public:
  Person5(string name, int age)
  {
    m_Name = name;
    m_Age = age;
  }

  bool operator==(Person5 &p)
  {
    if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
    {
      return true;
    }
    return false;
  };

  bool operator!=(Person5 &p)
  {
    if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
    {
      return false;
    }
    return true;
  };

  string m_Name;
  int m_Age;
};

void test05()
{
  Person5 p1("Tom", 18);
  Person5 p2("Tom", 18);

  if (p1 == p2)
  {
    cout << "p1和p2 是相等的" << endl;
  }
  else
  {
    cout << "p1和p2 是不相等的" << endl;
  }

  if (p1 != p2)
  {
    cout << "p1和p2 是不相等的" << endl;
  }
  else
  {
    cout << "p1和p2 是相等的" << endl;
  }
};

class MyPring
{
public:
  void operator()(string test)
  {
    cout << test << endl;
  };
};

void test06()
{
  MyPring myPring;
  myPring("Hello Word"); // 使用类似函数调用，称为仿函数
};

int main()
{

  // 加号运算符重载
  test01();

  // 左移运算符重载
  test02();

  // 递增运算符重载
  test03();

  // 赋值运算符重载
  test04();

  // 关系运算符重载
  test05();

  // 函数调用运算符重载
  test06();

  return 0;
};