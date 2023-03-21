/*
 * 文件名称:_007_4_类和对象_封装_成员属性私有化
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>

 /*
  *
  *成员属性私有化优点
  * 将所有成员属性私有化,可以自己控制读写权限
  * 对于写权限,我们可以检测数据的有效性
  *
  */
class Person
{
public:
	void setName(std::string name_string)
	{
		p_Name = name_string;
	}

	std::string getName()
	{
		return p_Name;
	}

private:
	//姓名
	std::string p_Name;
	//年龄
	int age;
};

int main(int argc, char* argv[])
{
	Person person;
	person.setName("dd");

	std::cout << "姓名:" << person.getName() << std::endl;

	system("pause");
	return 0;
	
}