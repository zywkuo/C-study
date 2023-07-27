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

  return 0;
}