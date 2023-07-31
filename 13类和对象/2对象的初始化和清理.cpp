#include <iostream>
using namespace std;

// 对象的初始化和清理
class Person
{
public:
  // 构造函数 进行初始化操作
  // 没有返回值，不写void
  // 函数名与类名相同
  // 可以有参数，可以发生重载
  // 穿件对象的时候，构造函数会自动调用，只调用一次
  Person()
  {
    cout << "Person 构造函数调用" << endl;
  }

  // 有参构造函数
  Person(int a)
  {
    m_Age = a;
    cout << "Person 有参构造函数" << endl;
  }

  // 拷贝构造函数
  Person(const Person &p)
  {
    m_Age = p.m_Age;
    cout << "Person 拷贝构造函数" << endl;
  }

  // 析构函数 进行清理的操作
  // 没有返回值，不写void
  // 函数名与类名相同 名称前加 ~
  // 不可以有参数，不可以发生重载
  // 对象在销毁前，会自动调用析构函数，只调用一次
  ~Person()
  {
    cout << "Person 析构函数调用" << endl;
  }

  int m_Age;
};

// 构造和析构必须存在，默认会自动创建
void test01()
{
  // 括号法调用
  Person p1; // 默认构造函数不加括号
  Person p2(10);
  Person p3(p2);

  cout << "p2的年龄：   " << p2.m_Age << endl;
  cout << "p3的年龄：   " << p3.m_Age << endl;

  // 显示法调用
  Person p4 = Person(10);
  Person p5 = Person(p4);

  // 隐式转换发调用
  Person p6 = 10;
  Person p7 = p6;
};

// 值传递方式给函数参数传值
void doWork(Person p){

};

void test02()
{
  Person p;
  doWork(p);
}

// 值方式返回局部对象
Person doWork2()
{
  Person p8;
  return p8;
};

void test03()
{
  Person p = doWork2();
};

class Person1
{

public:
  // 初始哈列表初始化属性
  Person1(int a, int b, int c) : m_A(a), m_B(b), m_C(c){};

  int m_A;
  int m_B;
  int m_C;
};

class Phone
{
public:
  Phone(string pName)
  {
    m_PName = pName;
  }

  string m_PName;
};
class Person2
{
public:
  Person2(string name, string pName) : m_Name(name), m_Phone(pName){};

  string m_Name;
  Phone m_Phone;
};

void test04()
{
  Person2 p("张三", "苹果Max");
  cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
};

class Person3
{
public:
  static int m_A;
  int m_B;

  static void func()
  {
    m_A = 200;
    // m_B = 200; 错误，静态函数不可访问非静态成员变量
    cout << "static void func 调用" << endl;
  };

private:
  static int m_C; // 类外无法访问
  static void func2(){
      // 类外无法访问
  };
};

int Person3::m_A = 100;

void test05()
{
  Person3 p;
  cout << p.m_A << endl;

  Person3 p2;
  p2.m_A = 200;
  cout << p.m_A << endl;

  //  通过类名访问
  cout << Person3::m_A << endl;

  p.func();
  Person3::func();
};

// 构造函数的分类及调用
int main()
{
  // 对象的初始化和清理
  // test01();
  // Person p;

  // 构造函数的分类及调用
  // 按照参数分类  无参构造  有参构造
  // 按照类型分类 普通构造  拷贝构造

  // 拷贝构造函数使用时机

  // test02();

  test03();

  // 深拷贝与浅拷贝
  // m_Height = new int(*p.m_Height);

  // 初始化列表
  Person1 p(3, 2, 1);
  cout << p.m_A << p.m_B << p.m_C << endl;

  // 类对象作为类成员
  test04();

  // 静态成员
  // static
  /**
   * 静态成员变量
   * 所有对象共享同一份数据
   * 在编译阶段分配内存
   * 类内声明，类外初始化
   */
  /**
   * 静态成员函数
   * 所有对象共享同一函数
   * 静态成员函数只能访问静态成员变量
   */
  test05();
  return 0;
}