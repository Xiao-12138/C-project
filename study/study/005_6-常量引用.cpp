#include <iostream>
using namespace std;

void showValue(const int& a)//����const��ֹ�����
{
	//a = 1000; //���ﱨ��,����const���Ϊ�������ó��������޸ķ�ֹ�����
	std::cout << a << endl;
}

int main(int argc, char* argv[])
{
	//�������ó���:���������β�,��ֹ�����

	//int& ref = 10; ���ñ�����Ҫһ���Ϸ����ڴ�ռ�,��˱���

	const int& ref = 10; //����ʵ����ִ�е��� int tmp = 10; const int& ref = tmp;���Ǳ������Զ��Ż���

	system("pause");
	return 0;
}