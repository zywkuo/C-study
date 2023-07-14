#include <iostream>
using namespace std;
#define MAX 1000

// 通讯录是一个可以记录亲人、好友信息的工具
// 本教程主要利用C++来实现一个通讯录管理系统
// 系统中需要实现的功能如下:
// 添加联系人:向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址)最多记录1000人
// 显示联系人: 显示通讯录中所有联系人信息
// 删除联系人: 按照姓名进行删除指定联系人
// 查找联系人: 按照姓名查看指定联系人信息
// 修改联系人: 按照姓名重新修改指定联系人
// 清空联系人: 清空通讯录中所有信息
// 退出通讯录:退出当前使用的通讯录

void showMenu()
{
  cout << "***********************" << endl;
  cout << "***** 1、添加联系人 *****" << endl;
  cout << "***** 2、显示联系人 *****" << endl;
  cout << "***** 3、删除联系人 *****" << endl;
  cout << "***** 4、查找联系人 *****" << endl;
  cout << "***** 5、修改联系人 *****" << endl;
  cout << "***** 6、清空联系人 *****" << endl;
  cout << "***** 0、退出联系人 *****" << endl;
  cout << "***********************" << endl;
}

// 联系人结构体
struct Person
{
  string m_Name;
  // 1：男  2：女
  int m_Sex;
  int m_Age;
  string m_Phone;
  string m_Addr;
};

// 通讯录结构体
struct Addressbooks
{
  // 联系人数组
  struct Person personArr[MAX];
  // 当前联系人个数
  int m_Size;
};

// 添加联系人
void addPreson(Addressbooks *abs)
{
  // 先判断人数
  if (abs->m_Size == MAX)
  {
    cout << "通讯录已满，无法添加！" << endl;
    return;
  }
  else
  {
    string name;
    cout << "请输入姓名：" << endl;
    cin >> name;
    abs->personArr[abs->m_Size].m_Name = name;

    cout << "请输入性别：" << endl;
    cout << "1---男" << endl;
    cout << "2---女" << endl;
    int sex = 0;
    while (true)
    {
      cin >> sex;
      if (sex == 1 || sex == 2)
      {
        abs->personArr[abs->m_Size].m_Sex = sex;
        break;
      }
      cout << "输入有误，重新输入：" << endl;
    }

    int age;
    cout << "请输入年龄：" << endl;
    cin >> age;
    abs->personArr[abs->m_Size].m_Age = age;

    string phone;
    cout << "请输入电话：" << endl;
    cin >> phone;
    abs->personArr[abs->m_Size].m_Phone = phone;

    string addr;
    cout << "请输入地址：" << endl;
    cin >> addr;
    abs->personArr[abs->m_Size].m_Addr = addr;

    abs->m_Size++;

    cout << "添加成功" << endl;

    // system("pause"); // 请安任意键继续
    cout << "按Enter继续...";
    cin.get();
    cin.get();
    system("clear"); // 清屏操作
  }
};

void showPerson(Addressbooks abs)
{
  if (abs.m_Size == 0)
  {
    cout << "通讯录为空" << endl;
    return;
  }
  for (int i = 0; i < abs.m_Size; i++)
  {
    cout << "姓名： " << abs.personArr[i].m_Name << "\t"
         << "性别： " << (abs.personArr[i].m_Sex == 1 ? "男" : "女") << "\t"
         << "年龄： " << abs.personArr[i].m_Age << "\t"
         << "电话： " << abs.personArr[i].m_Phone << "\t"
         << "地址： " << abs.personArr[i].m_Addr << endl;
  }

  cout << "按Enter继续...";
  cin.get();
  cin.get();
  system("clear"); // 清屏操作
}

int main()
{

  // 通讯录结构体变量
  Addressbooks abs;
  // 初始化当前人员个数
  abs.m_Size = 0;

  // 用户选择输入变量
  int select = 0;

  while (true)
  {
    showMenu();
    cin >> select;
    switch (select)
    {
    case 1:
      /* 添加联系人 */
      addPreson(&abs);
      break;
    case 2:
      /* 显示联系人 */
      showPerson(abs);
      break;
    case 3:
      /* 删除联系人 */
      break;
    case 4:
      /* 查找联系人 */
      break;
    case 5:
      /* 修改联系人 */
      break;
    case 6:
      /* 清空联系人 */
      break;
    case 0:
      /* 退出联系人 */
      cout << "欢迎下次使用" << endl;
      return 0;
      break;
    default:
      cout << "输入有误" << endl;
      break;
    }
  }

  return 0;
}