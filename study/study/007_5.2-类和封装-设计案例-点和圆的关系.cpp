#include <iostream>
#include <math.h>

/*
 * 判断点和圆的关系	（点在圆上、点在园外、点在圆内、点在圆心）
 * 判断方法通过判断点到圆心的距离和半径做比较 根号下(x1-x2)**2 +(y1-y2)**2  
 */
//创建坐标点类
class Coordinates
{
private:
	int m_x;
	int m_y;

public:
	void setX(int x)
	{
		m_x = x;
	}
	void setY(int y)
	{
		m_y = y;
	}
	int getX()
	{
		return m_x;
	}
	int getY()
	{
		return m_y;
	}
};
//创建点类
class Point
{
private:
	Coordinates m_c;
public:
	void setC(Coordinates c)
	{
		m_c.setX(c.getX());
		m_c.setY(c.getY());
	}
	Coordinates getCoordinates()
	{
		return m_c;
	}

};
//创建圆类
class Circle
{
private:
	int m_r;
	Coordinates O;
public:
	void setR(int r)
	{
		m_r = r;
	}
	void setO(Coordinates o)
	{
		O.setX(o.getX());
		O.setY(o.getY());
	}
	int getR()
	{
		return m_r;
	}
	Coordinates getO()
	{
		return O;
	}
	void isInclude(Point &p)
	{
		int result = pow((p.getCoordinates().getX() - O.getX()), 2) + pow((p.getCoordinates().getY() - O.getY()), 2);
		std::cout << result<<std::endl;
		if (result>pow(m_r,2))
		{
			std::cout << "点在圆外"<<std::endl;
		}
		else if(result < pow(m_r, 2))
		{
			std::cout << "点在圆内"<<std::endl;
		}else
		{
			std::cout << "点在圆上"<<std::endl;
		}
		

	}
};

int main(int argc, char* argv[])
{
	//实例化圆类
	Circle c;
	c.setR(4);
	Coordinates o;
	o.setX(5);
	o.setY(5);
	c.setO(o);
	//实例化点类
	Point p;
	Coordinates p1;
	p1.setX(6);
	p1.setY(1);
	p.setC(p1);
	c.isInclude(p);
	p1.setX(3);
	p1.setY(3);
	p.setC(p1);
	c.isInclude(p);
	p1.setX(5);
	p1.setY(1);
	p.setC(p1);
	c.isInclude(p);
	system("pause");
	return 0;
}
