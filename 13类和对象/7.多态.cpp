#include <iostream>
using namespace std;

class Animal
{
public:
  // 纯虚函数
  // 只要有一个纯虚函数，这个类成为抽象类
  // 特点
  // 1、无法实例化对象
  // 2、抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
  // virtual void func() = 0;

  virtual void speak()
  {
    cout << "动物在说话" << endl;
  }
};

class Cat : public Animal
{
  void speak()
  {
    cout << "小猫在说话" << endl;
  }
};

class Dog : public Animal
{
  void speak()
  {
    cout << "小狗在说话" << endl;
  }
};

void doSpeak(Animal &animal)
{
  animal.speak();
};

void test01()
{
  Cat cat;
  doSpeak(cat);

  Dog dog;
  doSpeak(dog);
};

int main()
{
  // 动态多态满足条件
  // 1、有继承关系
  // 2、子类重写父类虚函数 virtual   重写：函数返回值类型、参数列表完全相同

  // 动态多态使用
  // 父类的指针或者引用 指向子类对象

  test01();

  return 0;
};