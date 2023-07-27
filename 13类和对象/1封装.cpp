#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

const double PI = 3.14;

// 求圆的周长
class Circle_l
{
  // 访问权限
  // 公共权限
public:
  int m_r;

  double calcullateZC()
  {
    return 2 * PI * m_r;
  }
};

// 学生姓名和学号
class Student
{
public:
  string m_Name;
  int m_Id;
  void showStudent()
  {
    cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
  }

  // 给姓名赋值
  void setName(string name)
  {
    m_Name = name;
  }

  // 给学号赋值
  void setId(int id)
  {
    m_Id = id;
  }
};

class Person
{

public:
  // 公共权限
  string m_Name;

protected:
  // 保护权限
  string m_Car;

private:
  // 私有权限
  int m_Password;

public:
  void func()
  {
    m_Name = "张三";
    m_Car = "大众";
    m_Password = 123456;

    cout << m_Name << m_Car << m_Password << endl;
  }
};

class C1
{
  int m_A; // 默认权限 私有
};

struct C2
{
  int m_A; // 默认权限  公共
};

class Preson1
{
public:
  void setName(string name)
  {
    m_Name = name;
  }
  string getName()
  {
    return m_Name;
  }

  int getAge()
  {
    // 初始化
    m_Age = 0;
    return m_Age;
  }

  void setAge(int age)
  {
    if (age < 0 || age > 150)
    {
      m_Age = 0;
      cout << "年龄在0~150之间" << endl;
      return;
    }
    m_Age = age;
  }

  void setLover(string lover)
  {
    m_Lover = lover;
  }

private:
  // 可读可写
  string m_Name;

  int m_Age;
  // 只写
  string m_Lover;
};

class Cube
{

public:
  // 设置长
  void setL(int l)
  {
    m_L = l;
  }
  // 获取长
  int getL()
  {
    return m_L;
  }
  // 设置宽
  void setW(int w)
  {
    m_W = w;
  }
  // 获取宽
  int getW()
  {
    return m_W;
  }
  // 设置高
  void setH(int h)
  {
    m_H = h;
  }
  // 获取高
  int getH()
  {
    return m_H;
  }
  // 求面积
  int caculateS()
  {
    return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
  }
  // 求体积
  int caculateV()
  {
    return m_L * m_W * m_H;
  }
  // 成员函数判断是否相等
  bool isSameByClass(Cube &c)
  {
    if (c.getL() == m_L && c.getW() == m_W && c.getH() == m_H)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

private:
  int m_L; // 长
  int m_W; // 宽
  int m_H; // 高
};

// 全局函数判断是否相等
bool isSame(Cube &c1, Cube &c2)
{
  if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
  {
    return true;
  }
  else
  {
    return false;
  }
};

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
  int distance =
      (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
      (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

  int rDistance = c.getR() * c.getR();

  if (distance == rDistance)
  {
    cout << "点在圆上" << endl;
  }
  else if (distance > rDistance)
  {
    cout << "点在圆外" << endl;
  }
  else
  {
    cout << "点在圆内" << endl;
  }
};

int main()
{
  // 1、类和对象
  // 三大特性：封装、继承、多态

  // 通过圆类，创建具体的对象
  // 实例化
  Circle_l c1;
  c1.m_r = 10;

  cout << "圆的周长为：" << c1.calcullateZC() << endl;

  Student s1;
  s1.m_Name = "张三";
  s1.m_Id = 1;
  s1.showStudent();

  Student s2;
  // s2.m_Name = "李四";
  s2.setName("李四");
  // s2.m_Id = 2;
  s2.setId(2);
  s2.showStudent();

  // 类中属性和行为 称为  成员
  // 属性  成员属性  成员变量
  // 行为  成员函数  成员方法

  // 三种访问权限
  // 公共权限 public        成员  类内可以访问、类外也可以访问
  // 保护权限 protected     成员  类内可以访问、类外不可以访问  子类可以访问父类内容
  // 私有权限 private       成员  类内可以访问、类外不可以访问  子类不可以访问父类内容

  Person p1;
  p1.m_Name = "李四";
  p1.func();

  // struct和class区别
  // struct 默认权限为 公共  public
  // class 默认权限   私有  private
  // C1 c1;
  // c1.m_A = 100;  无权限
  // C2 c2;
  // c2.m_A = 100;

  // 成员属性设置为私有--自己控制读写权限，对于写可以检测数据的有效性
  Preson1 p11;
  p11.setName("张三");
  cout << "姓名：" << p11.getName() << endl;
  cout << "年龄：" << p11.getAge() << endl;
  p11.setLover("张三媳妇");
  p11.setAge(100);

  // 练习案例1: 设计立方体类
  // 设计立方体类(Cube)
  // 求出立方体的面积和体积
  // 分别用全局函数和成员函数判断两个立方体是否相等
  Cube cc1;
  cc1.setL(10);
  cc1.setW(10);
  cc1.setH(10);

  cout << "面积：" << cc1.caculateS() << endl;
  cout << "体积：" << cc1.caculateV() << endl;

  Cube cc2;
  cc2.setL(10);
  cc2.setW(10);
  cc2.setH(10);

  cout << "全局函数是否相等？：" << (isSame(cc1, cc2) ? "相等" : "不相等") << endl;
  cout << "成员函数是否相等？：" << (cc1.isSameByClass(cc2) ? "相等" : "不相等") << endl;

  // 练习案例2:点和圆的关系
  // 设计一个圆形类 (Circle) ，和一个点类 (Point) ，计算点和圆的关系
  // 点到圆心的距离公式 （x1 - x2）^ 2 + (y1 - y2) ^ 2 开根号
  Circle ccc1;
  ccc1.setR(10);
  Point center;
  center.setX(10);
  center.setY(0);
  ccc1.setCenter(center);

  Point p;
  p.setX(9);
  p.setY(0);

  isInCircle(ccc1, p);

  return 0;
}