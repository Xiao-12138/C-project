#include <iostream>
using namespace std;

//�����������ķ���ֵ

//��Ҫ���ؾֲ������ķ���ֵ

int& mySwap01()
{
	int a = 10; //�ֲ���������ջ���У�ִ�����ᱻ�ͷ�
	return a;
}

//����������Ϊ��ֵ
int& mySwap02()
{
	static int a = 10; //��̬���������ȫ�������ڳ����������ϵͳ�ͷš��ʶ����Է���������

	return a;
}

int main(int argc, char* argv[])
{
	//����������Ϊ��ֵ
	int& ref = mySwap02();
	cout << ref << endl;
	mySwap02() = 1000; //��ʱ�ĺ���ʵ����a�����ùʶ�����仯��ֱ�Ӷ�a��ֵ���в�����ͬ��refҲ��a����������ref��ֵҲ�����˱仯
	std::cout << ref << endl;
	system("pause");
	return 0;
}