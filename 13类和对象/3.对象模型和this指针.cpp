#include <iostream>
using namespace std;

class Person
{
  int m_A; // 非静态成员变量 属于类的对象上

  static int m_B; // 静态成员变量 不属于类的对象上

  void func() {} // 非静态成员函数 不属于类的对象上
};

int Person::m_B = 0;

void test01()
{
  Person p;

  // 空对象分配一个字节空间 非空按照类型分配
  cout << "sizeof p = " << sizeof(p) << endl;
};

class Person1
{
public:
  Person1(int age)
  {
    this->age = age;
  };

  Person1 &PersonAndAge(Person1 &p)
  {
    this->age += p.age;
    return *this;
  };
  int age;
};

// 解决名称冲突
void test02()
{
  Person1 p1(18);
  cout << "p1的年龄为：" << p1.age << endl;
};

// 返回对象本身用 *this
void test03()
{
  Person1 p1(10);
  Person1 p2(10);

  p2.PersonAndAge(p1).PersonAndAge(p1).PersonAndAge(p1);
  cout << "p2的年龄为：" << p2.age << endl;
};

class Person2
{
public:
  void shwoClassName()
  {
    cout << "这是Person2" << endl;
  };

  void showPersonAge()
  {
    // 报错原因是传入的指针为NULL
    // if (this == NULL)
    // {
    //   return;
    // }
    cout << "age = " << m_Age << endl;
  }

  int m_Age;
};

void test04()
{
  Person2 *p = NULL;
  p->shwoClassName();
  p->showPersonAge();
};

// 常函数
class Person3
{
  // 成员函数后面加const 成为常函数 修饰的是this指向，让指针指向的值也不可以修改
  void showPerson() const
  {
    // m_A = 100;
    this->m_B = 100;
  }

  int m_A;
  mutable int m_B;
};

void test05()
{
  Person3 p;
  // p.showPerson();
};

// 常对象
void test06(){
    // const Person3 p;
};

int main()
{
  // 成员变量 和成员函数 分开存贮
  test01();

  // this 指针 指向被调用的函数所属的对象
  test02();
  test03();

  // 空指针访问成员函数
  // test04();

  // const 修饰成员函数

  return 0;
};
