#include <iostream>
using namespace std;

/*
 * �������壺 ����ֵ���� ������ �������б�{���ʽ��return ���ʽ��}
 * ��������������д������ִ�����ݣ���������˵���ú�������
 * ��������ֻ����һ�Σ�������������д���
 *
 */
int add(int sum_1, int sum_2)
{
	return sum_1 + sum_2;
}

//�ȽϺ���

int max(int num_1, int num_2)
{
	return num_1 > num_2 ? num_1 : num_2;
}

int main(int argc, char* argv[])
{
	std::cout << add(12, 13) << endl;

	std::cout << max(33,44)<< endl;
	system("pause");

	return 0;

}
