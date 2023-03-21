#include <iostream>
#include <string>
#include "function.h"
using namespace std;

/*
 * 菜单展示函数
 */
void showMenu()
{
	std::cout << "***************************" << endl;
	std::cout << "*****  1. 添加联系人  *****" << endl;
	std::cout << "*****  2. 显示联系人  *****" << endl;
	std::cout << "*****  3. 删除联系人  *****" << endl;
	std::cout << "*****  4. 查找联系人  *****" << endl;
	std::cout << "*****  5. 修改联系人  *****" << endl;
	std::cout << "*****  6. 清空联系人  *****" << endl;
	std::cout << "*****  0. 退出通讯录  *****" << endl;
	std::cout << "***************************" << endl;
}

/**
 * \brief
 * \param a 要查找的字符串
 * \param b 字符串查找范围
 * \return 返回结果
 */
double stringAinB(string a, string b)
{
	string::size_type idx;
	//在B中查找A
	idx = b.find(a);
	if (idx == string::npos) // 不存在
	{
		return false;
	}
	else // 存在
	{
		return true;
	}
}

void addPerson(Addressbooks* ads)
{
	// 判断当前通讯录是否已满
	if (ads->m_Size == MAX)
	{
		std::cout << "当前通讯录已满!无法添加!" << endl;
	}
	else
	{
		//添加联系人
		//0. 添加姓名
		string name;
		std::cout << "请输入姓名: " << endl;
		std::cin >> name;
		ads->personArray[ads->m_Size].name = name;
		//1. 添加性别
		int sex;

		while (true)
		{
			std::cout << "请输入性别(1:男2:女):" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ads->personArray[ads->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				std::cout << "输入有误,请重新输入(1:男2:女)" << endl;
			}
		}

		//2. 添加年龄
		int age;
		while (true)
		{
			std::cout << "请输入年龄: " << endl;
			std::cin >> age;
			if (age >= 1 && age <= 120)
			{
				ads->personArray[ads->m_Size].m_Age = age;
				break;
			}
			else
			{
				std::cout << "输入有误,请重新输入!" << endl;
			}
		}

		//3. 添加电话
		string phoneNumber;

		while (true)
		{
			std::cout << "请输入电话号码: " << endl;
			std::cin >> phoneNumber;
			// 判断电话号码的位数
			if (phoneNumber.length() == 11)
			{
				ads->personArray[ads->m_Size].m_Phone = phoneNumber;
				break;
			}
			else
			{
				std::cout << "电话号码应为11位数字,请重新输入!" << endl;
			}
		}

		//4. 添加住址
		string addr;
		std::cout << "请输入地址: " << endl;
		std::cin >> addr;
		ads->personArray[ads->m_Size].m_Addr = addr;
		//5.更新通讯录人数
		ads->m_Size++;
		std::cout << "添加成功!" << endl;
		system("pause"); // 请按任意键继续
		system("cls"); // 清屏
	}
}

//显示联系人
void showPerson(Addressbooks* ads)
{
	if (ads->m_Size > 0)
	{
		for (int i = 0; i < ads->m_Size; ++i)
		{
			std::cout << "姓名:" << ads->personArray[i].name << "\t"
				<< "性别:" << (ads->personArray[i].m_Sex == 1 ? "男" : "女") << "\t"
				<< "年龄:" << ads->personArray[i].m_Age << "\t"
				<< "电话:" << ads->personArray[i].m_Phone << "\t"
				<< "地址:" << ads->personArray[i].m_Addr << "\t"
				<< endl;
		}
	}
	else
	{
		std::cout << "通讯录为空" << endl;
	}
	system("pause");
	system("cls");
}

/**
 * \brief 通过名字查找联系人
 * \param p_name 联系人名字
 * \return 存在返回索引值,不存在返回-1
 */
int findPerson(Addressbooks* ads, string p_name)
{
	int result = -1; // 设置一个初始结果
	if (ads->m_Size != 0)
	{
		for (int i = 0; i < ads->m_Size; ++i) // 遍历改数组
		{
			if (ads->personArray[i].name == p_name) // 如果该数组中存在该名称的联系人
			{
				result = i; // 返回该联系人在数组中的位置
			}
		}
	}
	else // 如果不存在,不做任何话操作直接返回初始值
	{
		std::cout << "通讯录为空!!!" << endl;
	}
	return result;
}

/*
 * 删除联系人
 */
void delPerson(Addressbooks* ads)
{
	std::cout << "请输入需要删除的联系人姓名:";
	string name;
	std::cin >> name;
	//判断是否存在该联系人
	int find_person = findPerson(ads, name);

	if (find_person == -1) // 不存在该联系人
	{
		std::cout << "不存在该联系人!" << endl;
	}
	else // 存在该联系人
	{
		// 执行删除操作(将该联系人后面的数据全部向前移动一位)实现数据覆盖删除,这种该方法只适用于数组的容量大于1的情况
		for (int i = find_person; i < ads->m_Size; ++i)
		{
			ads->personArray[i] = ads->personArray[i + 1]; // 用后面的数据覆盖前面的数据实现删除
			ads->m_Size--;
		}
		std::cout << "删除成功!" << endl;
	}
}

/**
 * \brief 通过名字查找该联系人并展示改联系人
 * \param ads 通信录实例
 */
void findPersonByName(Addressbooks* ads)
{
	std::cout << "请输入你要查找的姓名:" << endl;
	string inName;
	std::cin >> inName;
	int find_person = findPerson(ads, inName);
	if (find_person != -1)
	{
		std::cout << "姓名:" << ads->personArray[find_person].name << "\t"
			<< "性别:" << (ads->personArray[find_person].m_Sex == 1 ? "男" : "女") << "\t"
			<< "年龄:" << ads->personArray[find_person].m_Age << "\t"
			<< "电话:" << ads->personArray[find_person].m_Phone << "\t"
			<< "地址:" << ads->personArray[find_person].m_Addr << "\t"
			<< endl;
	}
	else
	{
		std::cout << "不存在该联系人!" << endl;
	}
	system("pause");
	system("cls");
}

/**
 * \brief 修改联系人
 * \param ads 通讯录实例
 */
void revise_person(Addressbooks* ads)
{
	std::cout << "请输入要修改的联系人的姓名:" << endl;
	string in_name;
	std::cin >> in_name;
	int find_person = findPerson(ads, in_name);
	if (find_person != -1)
	{
		std::cout << "请输入新的名称:" << endl;
		string new_name;
		std::cin >> new_name;
		ads->personArray[find_person].name = new_name;
		cout << ads->personArray[find_person].name << endl;
		while (true)
		{
			std::cout << "请输入新的性别(1:男,2:女):" << endl;
			int new_sex;
			std::cin >> new_sex;
			if (new_sex == 1 || new_sex == 2)
			{
				ads->personArray[find_person].m_Sex = new_sex;
				break;
			}
			else
			{
				std::cout << "输入错误请重新输入(1:男,2:女)!" << endl;
			}
		}
		while (true)
		{
			std::cout << "请输入新的年龄:" << endl;
			int new_age;
			std::cin >> new_age;
			if (0 < new_age < 150)
			{
				ads->personArray[find_person].m_Age = new_age;
				break;
			}
			else
			{
				std::cout << "输入有误请重新输入!" << endl;
			}
		}
		while (true)
		{
			std::cout << "请输入新的电话号码:" << endl;
			string new_phone;
			std::cin >> new_phone;
			if (new_phone.length() == 11)
			{
				ads->personArray[find_person].m_Phone = new_phone;
				break;
			}
			else
			{
				std::cout << "号码位数不对,请重新输入!" << endl;
			}
		}
		std::cout << "请输入新的地址:" << endl;
		string new_addr;
		std::cin >> new_addr;
		ads->personArray[find_person].m_Addr = new_addr;
		std::cout << "修改完成!" << endl;
	}
	else
	{
		std::cout << "不存在该联系人!" << endl;
	}
	system("pause");
	system("cls");
}

/**
 * \brief 清空联系人
 * \param ads 通讯录实例
 */
void cleanPerson(Addressbooks* ads)
{
	cout << "是否确定需要清空?(1:yes,2:no)" << endl;
	int result = 2;
	cin >> result;
	if (result == 1)
	{
		ads->m_Size = 0; //将联系人数量设置为0,进行逻辑清空
		cout << "通讯录已清空!" << endl;
	}
	system("pause");
	system("cls");
}