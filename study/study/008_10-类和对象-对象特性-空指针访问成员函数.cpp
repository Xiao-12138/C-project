#include <iostream>
/*
 * ��ָ��Ҳ���Ե��ó�Ա����,����ҲҪע����û���õ�thisָ��
 *
 * ����õ�Ҫ���жϱ�֤����Ľ�׳��
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
	//p->showPersonAge(); //this �� nullptr�� ��Ϊ�����ָ����NULL �����ڵĶ����޷����ʲ����ڵ�����
}

int main(int argc, char* argv[])
{
	test();
	system("pause");

	return 0;
}