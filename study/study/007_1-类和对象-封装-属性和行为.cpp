/*
 * 文件名称:类和对象_封装_属性和行为
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
#include <string>
using namespace std;
/*
* 面向对象三大特征:
*	封装.继承.多态
*
* 封装
*	封装的意义
*		将属性和行为作为一个整体表现生活中的事物
*		将属性和行为加以权限控制
*
* 封装的意义:
*	在设计类的时候,属性和行为写在一起,表现事物
*
* 语法: class 类名{访问权限: 属性/行为}
*
*/

//设计一个圆类,获取周长

//定义圆周率
const double PI = 3.14;

class Circle
{
	//设置权限
public:
	//成员属性,成员变量

	//半径
	int m_r;
	//行为
	//成员函数,成员方法

	void setM_r(int r)
	{
		m_r = r;
	}

	//获取周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

//设计一个学生类

class Students
{
public:
	string stu_name;
	int stu_num;
	double stu_score;

	void setName(string name)
	{
		stu_name = name;
	}

	void setId(int id)
	{
		stu_num = id;
	}

	void setScore(double score)
	{
		stu_score = score;
	}

	void showStudent()
	{
		std::cout << "姓名:" << stu_name << endl;
		std::cout << "学号:" << stu_num << endl;
		std::cout << "成绩:" << stu_score << endl;
	}
};

int main(int argc, char* argv[])
{
	//实例化:通过圆类 创建具体的圆对象
	Circle c1;
	//给圆对象的属性赋值
	c1.m_r = 20;
	//获取该圆的周长
	double R = c1.calculateZC();

	//实例化学生对象
	Students stu1{ "Join", 001, 588.23 };

	stu1.showStudent();

	std::cout << "该圆的周长为:" << R << endl;

	system("pause");
	return 0;
}