#include <iostream>
using namespace std;

/*
 * 堆区:
 *	程序员分配释放,若程序员不释放,程序结束时由操作系统回收
 *
 *	使用new在堆区中开辟内存
 *
 *	使用 delete 释放
 */

int* func()
{
	// 利用new 关键字 可以将数据开辟到堆区
	// 指针 本质上也是局部变量,放在栈区,指针保存的数据是放在堆区
	int* p = new int(10); // 返回的值是该数据类型的指针
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
	//在堆区开辟数据
	int* p = func();

	std::cout << *p << endl;
	std::cout << *p << endl;
	// 使用 delete 关键字进行释放
	delete p;
	//std::cout << *p << endl; // 这里会报错 因为该数据已被释放
	int* arr = new int[10]; // 返回该连续内存空间的首地址
	for (int i = 0; i < 10; ++i)
	{
		// 添加元素
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; ++i)
	{
		std::cout << arr[i] << endl;
	}
	//释放
	delete[] arr;
	system("pause");  // NOLINT(concurrency-mt-unsafe)
	return 0;
}