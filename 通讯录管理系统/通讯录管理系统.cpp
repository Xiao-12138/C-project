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
	//创建通讯录对象
	Addressbooks ads;
	//初始化通讯录人数
	ads.m_Size = 0;

	string select;
	//调用菜单展示函数
	while (true)
	{
		showMenu();
		//实现菜单选择功能
		cin >> select;
		if (stringAinB(select, "0123456"))
		{
			switch (std::stoi(select)) // string 转 int
			{
			case 1: //添加联系人
				addPerson(&ads);
				break;
			case 2: //显示联系人
				showPerson(&ads);
				break;
			case 3: //删除联系人
				delPerson(&ads);
				break;
			case 4: //查找联系人
				findPersonByName(&ads);
				break;
			case 5: //修改联系人
				revise_person(&ads);
				break;
			case 6: //清空联系人
				cleanPerson(&ads);
				break;
			case 0: //退出通讯录
				cout << "欢迎再次使用!!!" << endl;
				system("Pause");
				return 0;
				break;
			}
		}
		else
		{
			std::cout << "没有这个选项";
			continue;
		}
	}
}