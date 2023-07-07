#include <iostream>
using namespace std;

int main()
{
  // 数组
  // 定义方法
  // 数据类型 数组名[数组长度];
  // 数据类型 数组名[数组长度] = {值1，值2，...};
  // 数据类型 数组名[] = {值1，值2，...};

  // int arr1[10];
  // int arr2[5] = {1, 2};
  // int arr3[] = {1, 2, 3};
  // int arr4[] = {};
  // cout << arr1[0] << endl;
  // cout << arr2[0] << endl;
  // cout << arr3[0] << endl;
  // cout << arr4[0] << endl;

  // 数组名称用途
  // 统计数组在内存中长度
  // 获取数组内存中首地址

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << "数组的内存长度：" << sizeof(arr) << endl;
  cout << "单个数组内存长度：" << sizeof(arr[0]) << endl;
  cout << "数组个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
  cout << "数组首地址为：" << arr << endl;

  // 五只小猪称体重
  int arr1[5] = {300, 350, 200, 400, 250};
  int maxp = 0;
  for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
  {
    if (arr1[i] > maxp)
    {
      maxp = arr1[i];
    }
  }
  cout << "最重的小猪为：" << maxp << endl;

  // 数组元素逆置
  int arr2[] = {1, 2, 3, 4, 5};
  int start = 0;
  int end = sizeof(arr2) / sizeof(arr2[0]) - 1;
  for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
  {
    if (start < end)
    {
      int temp = arr2[start];
      arr2[start] = arr2[end];
      arr2[end] = temp;
      start++;
      end--;
    }
  }

  for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
  {
    cout << arr2[i] << " ";
  }
  cout << endl;

  // 冒泡排序--升序
  int arr3[] = {4, 2, 8, 0, 5, 7, 1, 3, 9, 6};
  for (int j = 0; j < sizeof(arr3) / sizeof(arr3[0]) - 1; j++)
  {
    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]) - j - 1; i++)
    {
      if (arr3[i] > arr3[i + 1])
      {
        int temp = arr3[i];
        arr3[i] = arr3[i + 1];
        arr3[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
  {
    cout << arr3[i] << " ";
  }
  cout << endl;

  // 二维数组
  // 数据类型 数组名[ 行数 ][ 列数 ];
  // 数据类型 数组名[ 行数][ 列数] = {{数据1，数据2 }，{数3，数据4 } };
  // 数据类型 数组名[ 行数][ 列数] = { 数据1，数据2，数据3，数据4};
  // 数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4 };

  int arr4[2][3] = {
      {1, 2, 3},
      {7, 8, 9}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr4[i][j] << " ";
    }
    cout << endl;
  }

  cout << "二维数组所占内存空间为：" << sizeof(arr4) << endl;
  cout << "二维数组第一行占内存空间为：" << sizeof(arr4[0]) << endl;
  cout << "二维数组第一个元素占内存空间为：" << sizeof(arr4[0][0]) << endl;
  cout << "二维数组行数为：" << sizeof(arr4) / sizeof(arr4[0]) << endl;
  cout << "二维数组列数为：" << sizeof(arr4)[0] / sizeof(arr4[0][0]) << endl;
  cout << "二维数组首地址为：" << arr4 << endl;
  cout << "二维数组第一行首地址为：" << arr4[0] << endl;

  // 考试成绩统计
  string names[] = {"张三", "李四", "王五"};
  int arr5[3][3] = {
      {100, 100, 100},
      {90, 50, 100},
      {60, 70, 80}};

  for (int i = 0; i < 3; i++)
  {
    int totle = 0;
    for (int j = 0; j < 3; j++)
    {
      totle += arr5[i][j];
    }
    cout << names[i] << " 总成绩为：" << totle << endl;
  }

  return 0;
}