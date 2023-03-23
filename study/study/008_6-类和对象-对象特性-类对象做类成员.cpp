/*
 * 文件名称:_008__6_类和对象_对象特性_类对象做类成员
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
 /*
  *对象做类的成员
  *
  *其他对象作为类成员先构造成员对象后构造主对象,析构则相反
  *
  */
class Phone
{
public:
	long m_number;
	std::string m_name;

	Phone(long num, std::string name) : m_number(num), m_name(name)
	{
	}
};

class Person
{
public:
	std::string m_name;
	Phone m_phone;

	Person(std::string name, Phone phone) : m_name(name), m_phone(phone)
	{
	}

	~Person()
	{
	}
};

int main(int argc, char* argv[])
{
	Person p("ww", Phone(21342432421, "锤子"));
	std::cout << p.m_name << p.m_phone.m_name << "电话号码:" << p.m_phone.m_number << std::endl;
	system("pause");
	return 0;
}