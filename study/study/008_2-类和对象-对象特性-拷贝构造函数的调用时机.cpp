#include <iostream>

/*
 * �������캯���ĵ���ʱ��
 *	ʹ��һ���Ѿ�������ɵĶ�������ʼ��һ���¶���
 *	ֵ���ݵķ�ʽ������������ֵ
 *	��ֵ��ʽ���ؾֲ�����
 */
class Person
{
public:
	Person (){}
	Person(int age)
	{
		m_age = age;
	}
	Person (const Person & p)
	{
		std::cout << "�������캯������" << std::endl;
		m_age = p.m_age;
	}
	int getAge()
	{
		return m_age;
	}
	~Person()
	{
		std::cout << "������������"<<std::endl;
	}
private:
	int m_age;
};
void test01(Person p)//ֵ���ݷ�ʽ��������ֵ
{
	
}
Person test02()
{
	Person p;
	return p;//���صĶ�����ͨ���������캯�����ƵĶ���
}
int main(int argc, char* argv[])
{
	//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶��� 
	Person p(10);
	std::cout << &p<<std::endl;
	Person p1(p);
	std::cout << "p1������Ϊ��" << p1.getAge() << std::endl;

	//2��ֵ���ݵķ�ʽ������������ֵ
	test01(p);//ֵ���ݵķ�ʽ��������ֵ������ÿ������캯������һ�����󣬺����ڲ����ö��󲻻�Ӱ��Դ����

	//3��ֵ��ʽ���ؾֲ�����
	Person p3 = test02(); 
	std::cout << &p3<<std::endl;//��������ĵ�ֵַ����һ�����������ǲ�����ͬһ������
	system("pause");
	return 0;
}
