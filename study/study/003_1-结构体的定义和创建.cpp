#include <iostream>
using namespace std;
#include <string>

int main(int argc, char* argv[])
{
	/*
	 * �ṹ��:�û��Զ������������,�����û��洢��ͬ����������
	 * �﷨:struct �ṹ���� {�ṹ���Ա�б�}
	 *
	 * ͨ���ṹ�崴�������ķ�ʽ:
	 * struct �ṹ���� ������
	 * struct �ṹ���� ������ ={��Ա1ֵ,��Ա2ֵ...}
	 * ����ṹ��ʱ˳�㴴������
	 *
	 * ע��:
	 *	����ṹ��ʾ��struct����ʡ��
	 *	�����ṹ�����ʱstruct ����ʡ��
	 *	ʹ��"."���ʳ�Ա�ڱ���
	 */
	struct student
	{
		string name; //����

		int age; // ����

		int score; // ����
	} s3;

	//�������������ַ�ʽ
	struct student s1;
	s1.name = "������";
	s1.age = 22;
	s1.score = 33;

	std::cout << s1.name << s1.age << s1.score << endl;

	struct student s2 = {"����˨", 55, 88};
	std::cout << s2.name << s2.age << s2.score << endl;

	s3 = {"����",44,99};
	std::cout << s3.name << s3.age << s2.score << endl;
	system("pause");
	return 0;
}
