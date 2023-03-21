#include <iostream>
/*
 * 立方体类设计
 * 1、创建立方体类
 * 2、设计属性
 * 3、设计行为 获取立方体体积和面积
 * 4、分别利用全局函数和成员函数 判断两个立方体是否相等
 */
class Cube
{
public:
	//设置长
	void setL(int l)
	{
		m_l = l;
	}

	//获取长
	int getL()
	{
		return m_l;
	}

	//set width
	void setW(int w)
	{
		m_w = w;
	}

	// get width
	int getW()
	{
		return m_w;
	}

	// set high
	void setH(int h)
	{
		m_h = h;
	}

	// get high
	int getH()
	{
		return m_h;
	}

	//calculate area
	int calculateArea()
	{
		return 2 * (m_h * m_w + m_h * m_l + m_l * m_w);
	}

	//calculate volume  
	int calculateVolume()
	{
		return m_h * m_w * m_l;
	}
	//创建成员比较函数
	void isSame1(Cube &c)
	{
		if (m_l == c.getL()&&m_w == c.getW()&&m_h == c.getH())
		{
			std::cout << "两个立方体完全相同"<<std::endl;
		}else
		{
			std::cout << "两个立方体不相同"<<std::endl;
		}
	}

private:
	//长
	int m_l;
	//宽
	int m_w;
	//高
	int m_h;
};

//全局函数判断两个立方体是否完全相同
void isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		std::cout << "c1和c2完全相同" << std::endl;
	}
	else
	{
		std::cout << "两个立方体不相同" << std::endl;
	}
}

int main(int argc, char* argv[])
{
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	//实例化新的立方体c2
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	//使用全局函数进行判断
	isSame(c1, c2);
	//使用成员函数进行判断
	c1.isSame1(c2);
	std::cout << "该立方体的面积为：" << c1.calculateArea() << std::endl;
	std::cout << "该立方体的体积为：" << c1.calculateVolume() << std::endl;

	system("pause");
	return 0;
}
