#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
private:
  int m_R; // 半径

  Point m_Center; // 圆心

public:
  void setR(int r);

  int getR();

  void setCenter(Point center);

  Point getCenter();
};
