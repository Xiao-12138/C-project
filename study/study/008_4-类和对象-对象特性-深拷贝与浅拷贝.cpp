#include <iostream>
/*

深拷贝与浅拷贝

*/

class Person
{
private:
	int m_Age;
	int* m_Height;

public:
	int getAge()
	{
		return m_Age;
	}
	int getHeight()
	{
		return *m_Height;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age; // 浅拷贝
		//深拷贝解决问题 在堆区中重新创建一个值相同的对象
		// m_Height = p.m_Height; 这里就是浅拷贝
		m_Height = new int(*p.m_Height);
	}

	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
	}

	~Person()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height == NULL;
		}
	}
};

int main()
{
	Person p1(18, 160);
	Person p2 = Person(p1);
	std::cout << p2.getAge() << p2.getHeight() << std::endl;
	system("pause");
	return 0;
}
