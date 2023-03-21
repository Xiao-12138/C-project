#include <iostream>
#include <string>
#include "function.h"
using namespace std;

/**
 * \brief
 * \param argc
 * \param argv
 * \return
 */
int main(int argc, char* argv[])
{
	//����ͨѶ¼����
	Addressbooks ads;
	//��ʼ��ͨѶ¼����
	ads.m_Size = 0;

	string select;
	//���ò˵�չʾ����
	while (true)
	{
		showMenu();
		//ʵ�ֲ˵�ѡ����
		cin >> select;
		if (stringAinB(select, "0123456"))
		{
			switch (std::stoi(select)) // string ת int
			{
			case 1: //�����ϵ��
				addPerson(&ads);
				break;
			case 2: //��ʾ��ϵ��
				showPerson(&ads);
				break;
			case 3: //ɾ����ϵ��
				delPerson(&ads);
				break;
			case 4: //������ϵ��
				findPersonByName(&ads);
				break;
			case 5: //�޸���ϵ��
				revise_person(&ads);
				break;
			case 6: //�����ϵ��
				cleanPerson(&ads);
				break;
			case 0: //�˳�ͨѶ¼
				cout << "��ӭ�ٴ�ʹ��!!!" << endl;
				system("Pause");
				return 0;
				break;
			}
		}
		else
		{
			std::cout << "û�����ѡ��";
			continue;
		}
	}
}