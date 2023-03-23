/*
 * 文件名称:_008_5_类和对象_对象特性_初始化列表
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>

 /*
  * 初始化列表
  *
  *语法:
  *	类名(数据类型 a,.....):数据类型(a),.......{}
  *
  *
  */

class Person
{
public:
	int m_a;
	int m_b;
	int m_c;
	//初始化列表方式初始化
	Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c)
	{
	}
};

int main(int argc, char* argv[])
{
	Person p(10, 20, 30);
	std::cout << p.m_a << p.m_b << p.m_c << std::endl;
	system("pause");
	return 0;
}