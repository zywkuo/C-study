#include <iostream>
using namespace std;

/*
常量定义方式
1、	# define 宏常量 无法修改
2、const 修饰的变量为常量  无法修改
*/

#define Day 7

int main()
{
	int a = 10;
	int b = 20;
	int sum = a + b;
	printf("总数 = %d\n", sum);
	cout << "Hello World!" << endl;

	cout << "一周有：" << Day << " 天" << endl;

	const int month = 12;
	cout << "一年有：" << month << " 月" << endl;

	return 0;
}
