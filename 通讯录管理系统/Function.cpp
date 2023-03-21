#include <iostream>
#include <string>
#include "function.h"
using namespace std;

/*
 * �˵�չʾ����
 */
void showMenu()
{
	std::cout << "***************************" << endl;
	std::cout << "*****  1. �����ϵ��  *****" << endl;
	std::cout << "*****  2. ��ʾ��ϵ��  *****" << endl;
	std::cout << "*****  3. ɾ����ϵ��  *****" << endl;
	std::cout << "*****  4. ������ϵ��  *****" << endl;
	std::cout << "*****  5. �޸���ϵ��  *****" << endl;
	std::cout << "*****  6. �����ϵ��  *****" << endl;
	std::cout << "*****  0. �˳�ͨѶ¼  *****" << endl;
	std::cout << "***************************" << endl;
}

/**
 * \brief
 * \param a Ҫ���ҵ��ַ���
 * \param b �ַ������ҷ�Χ
 * \return ���ؽ��
 */
double stringAinB(string a, string b)
{
	string::size_type idx;
	//��B�в���A
	idx = b.find(a);
	if (idx == string::npos) // ������
	{
		return false;
	}
	else // ����
	{
		return true;
	}
}

void addPerson(Addressbooks* ads)
{
	// �жϵ�ǰͨѶ¼�Ƿ�����
	if (ads->m_Size == MAX)
	{
		std::cout << "��ǰͨѶ¼����!�޷����!" << endl;
	}
	else
	{
		//�����ϵ��
		//0. �������
		string name;
		std::cout << "����������: " << endl;
		std::cin >> name;
		ads->personArray[ads->m_Size].name = name;
		//1. ����Ա�
		int sex;

		while (true)
		{
			std::cout << "�������Ա�(1:��2:Ů):" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ads->personArray[ads->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				std::cout << "��������,����������(1:��2:Ů)" << endl;
			}
		}

		//2. �������
		int age;
		while (true)
		{
			std::cout << "����������: " << endl;
			std::cin >> age;
			if (age >= 1 && age <= 120)
			{
				ads->personArray[ads->m_Size].m_Age = age;
				break;
			}
			else
			{
				std::cout << "��������,����������!" << endl;
			}
		}

		//3. ��ӵ绰
		string phoneNumber;

		while (true)
		{
			std::cout << "������绰����: " << endl;
			std::cin >> phoneNumber;
			// �жϵ绰�����λ��
			if (phoneNumber.length() == 11)
			{
				ads->personArray[ads->m_Size].m_Phone = phoneNumber;
				break;
			}
			else
			{
				std::cout << "�绰����ӦΪ11λ����,����������!" << endl;
			}
		}

		//4. ���סַ
		string addr;
		std::cout << "�������ַ: " << endl;
		std::cin >> addr;
		ads->personArray[ads->m_Size].m_Addr = addr;
		//5.����ͨѶ¼����
		ads->m_Size++;
		std::cout << "��ӳɹ�!" << endl;
		system("pause"); // �밴���������
		system("cls"); // ����
	}
}

//��ʾ��ϵ��
void showPerson(Addressbooks* ads)
{
	if (ads->m_Size > 0)
	{
		for (int i = 0; i < ads->m_Size; ++i)
		{
			std::cout << "����:" << ads->personArray[i].name << "\t"
				<< "�Ա�:" << (ads->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t"
				<< "����:" << ads->personArray[i].m_Age << "\t"
				<< "�绰:" << ads->personArray[i].m_Phone << "\t"
				<< "��ַ:" << ads->personArray[i].m_Addr << "\t"
				<< endl;
		}
	}
	else
	{
		std::cout << "ͨѶ¼Ϊ��" << endl;
	}
	system("pause");
	system("cls");
}

/**
 * \brief ͨ�����ֲ�����ϵ��
 * \param p_name ��ϵ������
 * \return ���ڷ�������ֵ,�����ڷ���-1
 */
int findPerson(Addressbooks* ads, string p_name)
{
	int result = -1; // ����һ����ʼ���
	if (ads->m_Size != 0)
	{
		for (int i = 0; i < ads->m_Size; ++i) // ����������
		{
			if (ads->personArray[i].name == p_name) // ����������д��ڸ����Ƶ���ϵ��
			{
				result = i; // ���ظ���ϵ���������е�λ��
			}
		}
	}
	else // ���������,�����κλ�����ֱ�ӷ��س�ʼֵ
	{
		std::cout << "ͨѶ¼Ϊ��!!!" << endl;
	}
	return result;
}

/*
 * ɾ����ϵ��
 */
void delPerson(Addressbooks* ads)
{
	std::cout << "��������Ҫɾ������ϵ������:";
	string name;
	std::cin >> name;
	//�ж��Ƿ���ڸ���ϵ��
	int find_person = findPerson(ads, name);

	if (find_person == -1) // �����ڸ���ϵ��
	{
		std::cout << "�����ڸ���ϵ��!" << endl;
	}
	else // ���ڸ���ϵ��
	{
		// ִ��ɾ������(������ϵ�˺��������ȫ����ǰ�ƶ�һλ)ʵ�����ݸ���ɾ��,���ָ÷���ֻ�������������������1�����
		for (int i = find_person; i < ads->m_Size; ++i)
		{
			ads->personArray[i] = ads->personArray[i + 1]; // �ú�������ݸ���ǰ�������ʵ��ɾ��
			ads->m_Size--;
		}
		std::cout << "ɾ���ɹ�!" << endl;
	}
}

/**
 * \brief ͨ�����ֲ��Ҹ���ϵ�˲�չʾ����ϵ��
 * \param ads ͨ��¼ʵ��
 */
void findPersonByName(Addressbooks* ads)
{
	std::cout << "��������Ҫ���ҵ�����:" << endl;
	string inName;
	std::cin >> inName;
	int find_person = findPerson(ads, inName);
	if (find_person != -1)
	{
		std::cout << "����:" << ads->personArray[find_person].name << "\t"
			<< "�Ա�:" << (ads->personArray[find_person].m_Sex == 1 ? "��" : "Ů") << "\t"
			<< "����:" << ads->personArray[find_person].m_Age << "\t"
			<< "�绰:" << ads->personArray[find_person].m_Phone << "\t"
			<< "��ַ:" << ads->personArray[find_person].m_Addr << "\t"
			<< endl;
	}
	else
	{
		std::cout << "�����ڸ���ϵ��!" << endl;
	}
	system("pause");
	system("cls");
}

/**
 * \brief �޸���ϵ��
 * \param ads ͨѶ¼ʵ��
 */
void revise_person(Addressbooks* ads)
{
	std::cout << "������Ҫ�޸ĵ���ϵ�˵�����:" << endl;
	string in_name;
	std::cin >> in_name;
	int find_person = findPerson(ads, in_name);
	if (find_person != -1)
	{
		std::cout << "�������µ�����:" << endl;
		string new_name;
		std::cin >> new_name;
		ads->personArray[find_person].name = new_name;
		cout << ads->personArray[find_person].name << endl;
		while (true)
		{
			std::cout << "�������µ��Ա�(1:��,2:Ů):" << endl;
			int new_sex;
			std::cin >> new_sex;
			if (new_sex == 1 || new_sex == 2)
			{
				ads->personArray[find_person].m_Sex = new_sex;
				break;
			}
			else
			{
				std::cout << "�����������������(1:��,2:Ů)!" << endl;
			}
		}
		while (true)
		{
			std::cout << "�������µ�����:" << endl;
			int new_age;
			std::cin >> new_age;
			if (0 < new_age < 150)
			{
				ads->personArray[find_person].m_Age = new_age;
				break;
			}
			else
			{
				std::cout << "������������������!" << endl;
			}
		}
		while (true)
		{
			std::cout << "�������µĵ绰����:" << endl;
			string new_phone;
			std::cin >> new_phone;
			if (new_phone.length() == 11)
			{
				ads->personArray[find_person].m_Phone = new_phone;
				break;
			}
			else
			{
				std::cout << "����λ������,����������!" << endl;
			}
		}
		std::cout << "�������µĵ�ַ:" << endl;
		string new_addr;
		std::cin >> new_addr;
		ads->personArray[find_person].m_Addr = new_addr;
		std::cout << "�޸����!" << endl;
	}
	else
	{
		std::cout << "�����ڸ���ϵ��!" << endl;
	}
	system("pause");
	system("cls");
}

/**
 * \brief �����ϵ��
 * \param ads ͨѶ¼ʵ��
 */
void cleanPerson(Addressbooks* ads)
{
	cout << "�Ƿ�ȷ����Ҫ���?(1:yes,2:no)" << endl;
	int result = 2;
	cin >> result;
	if (result == 1)
	{
		ads->m_Size = 0; //����ϵ����������Ϊ0,�����߼����
		cout << "ͨѶ¼�����!" << endl;
	}
	system("pause");
	system("cls");
}