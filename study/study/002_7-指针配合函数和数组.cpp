#include <iostream>
using namespace std;
/*
 * 使用函数进行数组元素冒泡排序
 */
void function(int* arr1, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int tmp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < len; ++i)
	{
		std::cout << arr1[i] << endl;
	}
}

int main(int argc, char* argv[])
{
	//创建数组
	int arr[10] = {11, 42, 34, 421, 4, 4312, 423, 434, 34, 55};
	int len = std::size(arr);
	function(arr, len);
	system("pause");
	return 0;
}
