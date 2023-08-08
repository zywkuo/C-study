#include <iostream>
using namespace std;

// 普通写法
class Calaulator
{
public:
  int getResult(string oper)
  {
    if (oper == "+")
    {
      return m_Num1 + m_Num2;
    }
    else if (oper == "-")
    {
      return m_Num1 + m_Num2;
    }
    else if (oper == "*")
    {
      return m_Num1 * m_Num2;
    }
    return 0;
  };
  int m_Num1;
  int m_Num2;
};

void test01()
{
  Calaulator c;
  c.m_Num1 = 10;
  c.m_Num2 = 10;

  cout << c.getResult("+") << endl;
  cout << c.getResult("-") << endl;
  cout << c.getResult("*") << endl;
};

// 多态实现
class AbsttractCalculator
{
public:
  virtual int getResult()
  {
    return 0;
  }
  int m_Num1;
  int m_Num2;
};

class AddCalculator : public AbsttractCalculator
{
  int getResult()
  {
    return m_Num1 + m_Num2;
  }
};

class SubCalculator : public AbsttractCalculator
{
  int getResult()
  {
    return m_Num1 - m_Num2;
  }
};

class MulCalculator : public AbsttractCalculator
{
  int getResult()
  {
    return m_Num1 * m_Num2;
  }
};

void test02()
{
  AbsttractCalculator *abc = new AddCalculator;

  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  cout << abc->getResult() << endl;
  delete abc;

  abc = new SubCalculator;
  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  cout << abc->getResult() << endl;
  delete abc;

  abc = new MulCalculator;
  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  cout << abc->getResult() << endl;
  delete abc;
};

int main()
{
  // 普通写法
  // test01();

  // 多态实现
  test02();

  return 0;
};