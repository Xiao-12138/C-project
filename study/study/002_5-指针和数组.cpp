#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*
	 *指针和数组
	 */
	// 利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;	//这里实际上是将p 指向 arr 的地址同时 arr的地址和arr[0]的地址相同
	std::cout <<"sizeof(arr)" << &arr << endl;	//0000008FF0CFFA18
	std::cout << "sizeof(arr)" << p << endl;	//0000008FF0CFFA18
	std::cout <<"sizeof(arr[0])" <<&arr[0] << endl;	//0000008FF0CFFA18
	/*std::cout << "first:	" << p[0] << endl;
	std::cout << "first:	"<< p[1]<<endl;*/
	std::cout << arr<<endl;
	std::cout << p<<endl;
	std::cout << *p << endl;
	/*p++;// 让指针向后移动8个字节(几个字节取决于系统位数)
	std::cout << *p<<endl; */
	//利用指针进行数组的遍历
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
