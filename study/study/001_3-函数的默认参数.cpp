#include <iostream>
using namespace std;
//������Ĭ�ϲ���
//�������������Ĭ��ֵ,����û���������ݾ�ʹ��Ĭ��ֵ,������ֵ��ʹ�ô����ֵ

//ע������:
/*
 * ���ĳ��λ���Ѿ�����Ĭ�ϲ���,��ô�����λ������,�����Ҷ�������Ĭ��ֵ
 *
 *������������ʵ������ֻ����һ��������Ĭ�ϲ���
 *
 * int func(int a,int b); //����û��Ĭ��ֵ
 * int func(int a = 10,int b = 20){ //ʵ����Ĭ��ֵ
 *		........
 * }
 * ������ʵ�ֲ���ͬʱ����Ĭ��ֵ
 */
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int main(int argc, char* argv[])
{
	std::cout << func(10) << endl; //û�д���ʹ��Ĭ��ֵ

	std::cout << func(10, 50) << endl; //�������ʹ�ô���ֵ

	system("pause");

	return 0;
}