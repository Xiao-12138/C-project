/*
 * 文件名称:_007_2_类和对象_封装_访问权限
 * 创建时间:2023/2/28 15:11:25
 * by:JIA
 *
 */
#include <iostream>
#include <string>
using namespace std;
/*
 * 权限:
 *	public	公共权限	类内可以访问	类外可以访问
 *
 *	protected	保护权限	类内可以访问	类外不可以访问	子类可以访问
 *
 *	private	私有权限	类内可以访问	类外不可以访问	子类不可以访问
 *
 */
class Person
{
public:
	//公共权限
	string m_Name;

	void setName(string name)
	{
		m_Name = name;
	}

protected:
	//保护权限
	string m_Car;

	void setCar(string car)
	{
		m_Car = car;
	}

private:
	//私有权限
	long bank_Number;

	void setNumber(long bankNumber)

	{
		bank_Number = bankNumber;
	}
public:
	void test()
	{
	}
};

int main(int argc, char* argv[])
{
	Person p1;
	p1.m_Name = "王二";
	//p1.m_Car = "马自达";  //无法访问
	//p1.bank_Number = 324523543252353; 无法访问
	system("pause");
	return 0;
}