#include <iostream>
/*
 * 空指针也可以调用成员函数,但是也要注意有没有用到this指针
 *
 * 如果用到要加判断保证代码的健壮性
 */
class Person
{
public:
	void showClassName()
	{
		std::cout << "this is Person class" << std::endl;
	}

	void showPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		std::cout << "age = " << m_age << std::endl;
	}

	int m_age;
};

void test()
{
	Person* p = NULL;
	p->showClassName();
	//p->showPersonAge(); //this 是 nullptr。 因为传入的指针是NULL 不存在的对象无法访问不存在的属性
}

int main(int argc, char* argv[])
{
	test();
	system("pause");

	return 0;
}