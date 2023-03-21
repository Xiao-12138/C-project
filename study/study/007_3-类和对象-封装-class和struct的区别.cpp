/*
 * 文件名称:_007_3_类和对象_封装_class和struct的区别
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
 在C++中struct和class唯一的区别就在于 默认的访问权限不同

 区别:
	 struct默认权限为公共 public
	 class 默认权限为私有 private
 */

class C1
{
	int m_A; //默认是私有权限
};

struct C2
{
	int m_A; //默认是公共权限
};

int main(int argc, char* argv[])
{
	C1 c1;
	//c1.m_A = 10; //私有无法访问

	C2 c2;
	c2.m_A = 10;

	system("pause");
	return 0;
}