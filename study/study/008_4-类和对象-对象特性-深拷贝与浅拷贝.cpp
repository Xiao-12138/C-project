#include <iostream>
/*

�����ǳ����

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
		m_Age = p.m_Age; // ǳ����
		//���������� �ڶ��������´���һ��ֵ��ͬ�Ķ���
		// m_Height = p.m_Height; �������ǳ����
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
