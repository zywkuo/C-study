#include <iostream>
using namespace std;
#include <ctime>

// 结构体定义 自定义数据类型
struct student
{
  string name;
  int age;
  int score;
} s3;

// 值传递-函数内修改不改变实参
void printStudent1(struct student s)
{
  s.age = 66;
  cout << "姓名：" << s.name
       << " 年龄：" << s.age
       << " 分数：" << s.score << endl;
}

// 地址传递-函数内修改实参会改
void printStudent2(struct student *p)
{
  p->score = 1000;
  cout << "姓名：" << p->name
       << " 年龄：" << p->age
       << " 分数：" << p->score << endl;
}

// 使用指针节省空间，加上const不允许修改内部参数值
void printStudent3(const student *s)
{
  cout << "姓名：" << s->name
       << " 年龄：" << s->age
       << " 分数：" << s->score << endl;
}

// 案例一
struct case1_student
{
  string sName;
  int score;
};

struct case1_teacher
{
  string tName;
  struct case1_student sArr[5];
};
void allocateSpace(struct case1_teacher tArr[], int len);
void printInfo(struct case1_teacher tArr[], int len);

// 案例2
struct hero
{
  string name;
  int age;
  string sex;
};

int main()
{
  // 结构体
  // 用户自定义的数据类型，允许用户存储不同的数据类型
  // 语法 struct 名称 {成员列表}

  // 通过类型创建具体学生 struct关键字可以省略
  // 1、
  struct student s1;
  s1.name = "张三";
  s1.age = 18;
  s1.score = 90;
  cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
  // 2、
  struct student s2 = {"李四", 19, 80};
  cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
  // 3、定义结构体时创建
  s3.name = "王五";
  s3.age = 20;
  s3.score = 70;
  cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;

  // 结构体数组
  struct student stuArr[3] = {
      {"周一", 1, 100},
      {"周二", 2, 101},
      {"周三", 3, 102}};

  stuArr[2].name = "周末";
  stuArr[2].age = 6;
  stuArr[2].score = 106;

  for (int i = 0; i < 3; i++)
  {
    cout << "姓名：" << stuArr[i].name
         << " 年龄：" << stuArr[i].age
         << " 分数：" << stuArr[i].score << endl;
  }

  // 结构体指针
  struct student s5 = {"哈哈", 8, 100};
  struct student *p = &s5;
  p->name = "嘿嘿";
  cout << "姓名：" << s5.name << " 年龄：" << s5.age << " 分数：" << s5.score << endl;
  cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

  // 结构体嵌套结构体
  struct teacher
  {
    int id;
    string name;
    int age;
    struct student stu;
  };

  teacher tech;

  tech.id = 10001;
  tech.name = "老师名字";
  tech.age = 66;
  tech.stu.name = "老师的学生名字";

  cout << "tech id : " << tech.id << endl;
  cout << "tech stu name : " << tech.stu.name << endl;

  // 结构体做函数参数
  // 值传递
  // 地址传递
  struct student stu1;
  stu1.name = "stu1";
  stu1.age = 10;
  stu1.score = 200;

  printStudent1(stu1);
  printStudent2(&stu1);

  // 结构体重const使用场景
  struct student stu2 = {"stu2", 11, 111};
  printStudent3(&stu2);

  // 案例1
  // 案例描述:
  // 学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
  // 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
  // 学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
  // 最终打印出老师数据以及老师所带的学生数据

  // 随机数种子
  srand((unsigned int)time(NULL));

  struct case1_teacher tArr[3];

  int len = sizeof(tArr) / sizeof(tArr[0]);

  allocateSpace(tArr, len);
  printInfo(tArr, len);

  // 案例2
  // 案例描述:
  // 设计一个英雄的结构体，包括成员姓名，年龄，性别;
  // 创建结构体数组，数组中存放5名英雄。
  // 通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排席后的结果

  struct hero heroArr[] =
      {
          {"刘备", 23, "男"},
          {"关羽", 22, "男"},
          {"张飞", 20, "男"},
          {"赵云", 21, "男"},
          {"貂蝉", 19, "女"},
      };

  int len2 = sizeof(heroArr) / sizeof(heroArr[0]);
  for (int i = 0; i < len2 - 1; i++)
  {
    for (int j = 0; j < len2 - i - 1; j++)
    {
      if (heroArr[j].age > heroArr[j + 1].age)
      {
        struct hero temp = heroArr[j];
        heroArr[j] = heroArr[j + 1];
        heroArr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < len2; i++)
  {
    cout << heroArr[i].name << " " << heroArr[i].age << " " << heroArr[i].sex << endl;
  }

  return 0;
}

void allocateSpace(struct case1_teacher tArr[], int len)
{
  string nameSeed = "ABCDE";
  for (int i = 0; i < len; i++)
  {
    tArr[i].tName = "老师";
    tArr[i].tName += nameSeed[i];
    for (int j = 0; j < 5; j++)
    {
      tArr[i].sArr[j].sName = "学生";
      tArr[i].sArr[j].sName += nameSeed[j];

      int random = rand() % 41 + 60;
      tArr[i].sArr[j].score = random;
    }
  }
}

void printInfo(struct case1_teacher tArr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << "老师姓名：" << tArr[i].tName << endl;
    for (int j = 0; j < 5; j++)
    {
      cout << "\t学生姓名：" << tArr[i].sArr[j].sName << "  分数：" << tArr[i].sArr[j].score << endl;
    }
    cout << endl;
  }
}