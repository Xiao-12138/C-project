#include <iostream>
/*
 * ���캯���ķ���
 *	�������֣�
 *		�вι�����޲ι��죨Ĭ�Ϲ��죩
 *	�����ͷ֣�
 *		��ͨ����Ϳ�������
 *
 *	���ֵ��÷���
 *		���ŷ�
 *		��ʾ��
 *		��ʽת����
 */

class Person
{
public:
	//��ͨ����
	//�޲ι���
	Person(){}
	//�вι���
	Person(int a , std::string
n)
	{
		age = a;
		name = n;
	}
	//��������
	Person(const Person &p)
	{
		//����һ������
		age = p.age;
	}
private:
	int age;
	std::string name;

};
int main(int argc, char* argv[])
{
	//���ù��캯��
	//���ŷ���Ĭ�Ϸ�����
	//�޲ι���:ע���޲ι��첻Ҫ�ͼ�����Person P1���������д������������Ϊ��һ������������
	Person p1;
	//�вι���
	Person p2(20,"t");
	//��������
	Person p3(p1);

	//��ʾ��
	Person p6;
	Person p4 = Person(10,"w");
	Person p5 = Person(p6);
	Person(10,"d");//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//ע�⣺��Ҫ�ÿ������캯���������������� ����������Ϊ Person��p3��== Person p3(���������);

	//��ʽת����
	Person p7 = { 10,"r" }; //��ͬ��Person p7 = Person��10,"r"����
	Person P8 = p7;//��������
	system("pause");
	return 0;
}
