#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 *ָ�������
	 */
	// ����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;	//����ʵ�����ǽ�p ָ�� arr �ĵ�ַͬʱ arr�ĵ�ַ��arr[0]�ĵ�ַ��ͬ
	std::cout <<"sizeof(arr)" << &arr << endl;	//0000008FF0CFFA18
	std::cout << "sizeof(arr)" << p << endl;	//0000008FF0CFFA18
	std::cout <<"sizeof(arr[0])" <<&arr[0] << endl;	//0000008FF0CFFA18
	/*std::cout << "first:	" << p[0] << endl;
	std::cout << "first:	"<< p[1]<<endl;*/
	std::cout << arr<<endl;
	std::cout << p<<endl;
	std::cout << *p << endl;
	/*p++;// ��ָ������ƶ�8���ֽ�(�����ֽ�ȡ����ϵͳλ��)
	std::cout << *p<<endl; */
	//����ָ���������ı���
	for (int i = 0; i < std::size(arr); ++i)
	{
		//std::cout << *p <<endl;
		
		//std::cout << &arr[i]<<endl; // 00000095D2CFF508
		//std::cout << p[i] << endl;	// 00000095D2CFF508
		 p++;
		std::cout << *p <<endl;
	}
	system("pause");
	return 0;
}
