#include <iostream>
using namespace std;

/*
 * ����:
 *	����Ա�����ͷ�,������Ա���ͷ�,�������ʱ�ɲ���ϵͳ����
 *
 *	ʹ��new�ڶ����п����ڴ�
 *
 *	ʹ�� delete �ͷ�
 */

int* func()
{
	// ����new �ؼ��� ���Խ����ݿ��ٵ�����
	// ָ�� ������Ҳ�Ǿֲ�����,����ջ��,ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10); // ���ص�ֵ�Ǹ��������͵�ָ��
	return p;
}

/**
 * \brief
 * \param argc
 * \param argv
 * \return
 */
int main(int argc, char* argv[])
{
	//�ڶ�����������
	int* p = func();

	std::cout << *p << endl;
	std::cout << *p << endl;
	// ʹ�� delete �ؼ��ֽ����ͷ�
	delete p;
	//std::cout << *p << endl; // ����ᱨ�� ��Ϊ�������ѱ��ͷ�
	int* arr = new int[10]; // ���ظ������ڴ�ռ���׵�ַ
	for (int i = 0; i < 10; ++i)
	{
		// ���Ԫ��
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; ++i)
	{
		std::cout << arr[i] << endl;
	}
	//�ͷ�
	delete[] arr;
	system("pause");  // NOLINT(concurrency-mt-unsafe)
	return 0;
}