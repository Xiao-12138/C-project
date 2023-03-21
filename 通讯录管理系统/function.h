#pragma once
#include <iostream>
#include <string>

using namespace std;
//函数声明

#define MAX 1000

// 人员结构体
struct Person
{
	string name; //姓名
	int m_Sex; // 性别: 1男2女
	int m_Age; // 年龄
	string m_Phone; // 电话
	string m_Addr; // 住址
};

// 通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};

/**
 * 菜单展示函数
 */
void showMenu();
// 判断B中是否包含a
double stringAinB(string a, string b);
//添加联系人
void addPerson(Addressbooks* ads);
//显示联系人
void showPerson(Addressbooks* ads);

/*
 * 查找是否存在联系人
 */
int findPerson(Addressbooks* ads, string p_name);
/*
 * 删除联系人
 */
void delPerson(Addressbooks* ads);

/**
 * \brief 通过名字查找该联系人并展示改联系人
 * \param ads 通信录实例
 */
void findPersonByName(Addressbooks* ads);

/**
 * \brief 修改联系人
 * \param ads 通讯录实例
 */
void revise_person(Addressbooks* ads);

/**
 * \brief 清空联系人
 * \param ads 通讯录实例
 */
void cleanPerson(Addressbooks* ads);
