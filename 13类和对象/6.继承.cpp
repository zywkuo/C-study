#include <iostream>
using namespace std;

class BasePage
{
public:
  void header()
  {
    cout << "公共上方头部" << endl;
  }
  void footer()
  {
    cout << "公共下面底部" << endl;
  }
  void left()
  {
    cout << "公共列表分类" << endl;
  }
};

// Jave
class Java : public BasePage
{
public:
  void content()
  {
    cout << "Java" << endl;
  }
};
// Python
class Python : public BasePage
{
public:
  void content()
  {
    cout << "Python" << endl;
  }
};
// C++
class Cpp : public BasePage
{
public:
  void content()
  {
    cout << "Cpp" << endl;
  }
};

void test01()
{
  Java ja;
  ja.header();
  ja.footer();
  ja.left();
  ja.content();
  cout << "----------------" << endl;
  Python py;
  py.header();
  py.footer();
  py.left();
  py.content();
  cout << "----------------" << endl;
  Cpp cp;
  cp.header();
  cp.footer();
  cp.left();
  cp.content();
};

class Base1
{
public:
  Base1()
  {
    m_D = 100;
  }

  void func()
  {
    cout << "Base1 下 func() 调用" << endl;
  }

  int m_A;
  int m_D;

  static int m_F;

  static void func1()
  {
    cout << "Base1 下 static func1() 调用" << endl;
  }

protected:
  int m_B;

private:
  int m_C;
};

int Base1::m_F = 100;

class Son1 : public Base1
{
public:
  void func()
  {
    m_A = 10; // 公共权限
    m_B = 10; // 保护权限
    // m_C = 10; 不可访问
  }
};

class Son2 : protected Base1
{
public:
  void func()
  {
    m_A = 10; // 保护权限
    m_B = 10; // 保护权限
    // m_C = 10; 不可访问
  }
};

class Son3 : private Base1
{
public:
  void func()
  {
    m_A = 10; // 私有权限
    m_B = 10; // 私有权限
    // m_C = 10; 不可访问
  }
};

void test02()
{
  Son1 s1;
  s1.m_A = 100;
  // s1.m_B = 100; 不可访问

  Son2 s2;
  // s2.m_A = 100; 不可访问
  // s2.m_B = 100; 不可访问

  Son3 s3;
  // s3.m_A = 100; 不可访问
  // s3.m_B = 100; 不可访问
}

class Son4 : public Base1
{
public:
  Son4()
  {
    m_D = 200;
  }
  void func()
  {
    cout << "Son4 下 func() 调用" << endl;
  }

  int m_D;
};

void test03()
{
  Son4 s;

  cout << "Son4 下 m_D = " << s.m_D << endl;
  cout << "Base1 下 m_D = " << s.Base1::m_D << endl;

  s.func();
  s.Base1::func();
};

class Son5 : public Base1
{
public:
  static int m_F;

  static void func1()
  {
    cout << "Son5 下 static func1() 调用" << endl;
  }
};
int Son5::m_F = 200;

void test04()
{
  Son5 s;

  cout << "通过对象访问：" << endl;
  cout << "Son5 下 m_F = " << s.m_F << endl;
  cout << "Base1 下 m_F = " << s.Base1::m_F << endl;
  cout << "通过类名访问：" << endl;
  cout << "Son5 下 m_F = " << Son5::m_F << endl;
  cout << "Base1 下 m_F = " << Base1::m_F << endl;
  cout << "Base1 下 m_F = " << Son5::Base1::m_F << endl;
  cout << "通过对象访问：" << endl;
  s.func1();
  s.Base1::func1();
  cout << "通过类名访问：" << endl;
  Son5::func1();
  Base1::func1();
  Son5::Base1::func1();
};

class Son6 : public Base1, public BasePage
{
public:
  Son6()
  {
    m_E = 300;
    m_F = 400;
  }
  int m_E;
  int m_G;
};
void test05()
{
  Son6 s;
};

class Animal
{
public:
  int m_Age;
};

class Sheep : virtual public Animal
{
};

class Tuo : virtual public Animal
{
};

class SheepTuo : public Sheep, public Tuo
{
};

void test06()
{
  SheepTuo st;
  st.Sheep::m_Age = 18;
  st.Tuo::m_Age = 28;

  cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
  cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

  // 继承两个，以哪个为准？？？？？？
  // 利用虚继承  virtual ，解决菱形继承的问题
  cout << "st.m_Age = " << st.m_Age << endl;
};

int main()
{
  test01();

  // 继承方式
  // 公共继承
  // 保护继承
  // 私有继承
  test02();

  // 同名成员处理
  test03();

  // 同名静态成员处理
  test04();

  // 多继承语法
  test05();

  // 菱形继承
  test06();

  return 0;
};