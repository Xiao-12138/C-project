#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 * const����ָ�� ---����ָ��
	 *	�ص�:
	 *		ָ���ָ������޸�,��ָ���ֵ�������޸�
	 *		const int * p = &a;
	 *		*p = 20; // ����,ָ���ֵ�������޸�
	 *		p = &b; //ָ������޸�
	 * const���γ��� ---ָ�볣��
	 *	�ص�:ָ���ָ�򲻿��Ը�,ָ��ָ���ֵ�����޸�
	 *		int * const p = &a;
	 *		*p = 20; // ָ��ָ���ֵ�����޸�
	 *		p = &b; // ����ָ��ָ�����޸�
	 *
	 * const������ָ�������γ���
	 *	�ص�:
	 *		ָ��ָ���ָ���ֵ�������޸�
	 *		const int * const p = &a;
	 *		*p = 20;// ����
	 *		p = &b;// ����
	 */
	system("pause");
	return 0;
}
