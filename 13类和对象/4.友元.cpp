#include <iostream>
using namespace std;

// 友元 目的是让一个函数或者类 访问另一个类中私有成员  关键字 friend
class Building
{
  // 全局函数做友元
  friend void goodGay(Building *building);

  // 类做友元
  friend class GoodGay2;

  // 成员函数做友元
  // friend void GoodGay2::visit();

public:
  Building()
  {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
  }

public:
  string m_SittingRoom;

private:
  string m_BedRoom;
};

// 全局函数
void goodGay(Building *building)
{
  cout << "全局函数做友元 访问m_SittingRoom : " << building->m_SittingRoom << endl;
  cout << "全局函数做友元 访问m_BedRoom : " << building->m_BedRoom << endl;
};

void test01()
{
  Building building;
  goodGay(&building);
};

// 类做友元
class GoodGay2
{
public:
  GoodGay2();
  void visit();
  Building *building;
};

GoodGay2::GoodGay2()
{
  building = new Building;
};
void GoodGay2::visit()
{
  cout << "类做友元 访问m_SittingRoom : " << building->m_SittingRoom << endl;
  cout << "类做友元 访问m_BedRoom : " << building->m_BedRoom << endl;
};

void test02()
{
  GoodGay2 gg;
  gg.visit();
};

int main()
{
  test01();
  test02();
  return 0;
};