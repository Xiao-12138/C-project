#pragma once
#include <iostream>
#include <string>

using namespace std;
//��������

#define MAX 1000

// ��Ա�ṹ��
struct Person
{
	string name; //����
	int m_Sex; // �Ա�: 1��2Ů
	int m_Age; // ����
	string m_Phone; // �绰
	string m_Addr; // סַ
};

// ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

/**
 * �˵�չʾ����
 */
void showMenu();
// �ж�B���Ƿ����a
double stringAinB(string a, string b);
//�����ϵ��
void addPerson(Addressbooks* ads);
//��ʾ��ϵ��
void showPerson(Addressbooks* ads);

/*
 * �����Ƿ������ϵ��
 */
int findPerson(Addressbooks* ads, string p_name);
/*
 * ɾ����ϵ��
 */
void delPerson(Addressbooks* ads);

/**
 * \brief ͨ�����ֲ��Ҹ���ϵ�˲�չʾ����ϵ��
 * \param ads ͨ��¼ʵ��
 */
void findPersonByName(Addressbooks* ads);

/**
 * \brief �޸���ϵ��
 * \param ads ͨѶ¼ʵ��
 */
void revise_person(Addressbooks* ads);

/**
 * \brief �����ϵ��
 * \param ads ͨѶ¼ʵ��
 */
void cleanPerson(Addressbooks* ads);
