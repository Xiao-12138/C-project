#include <iostream>
/*
 * �����������
 * 1��������������
 * 2���������
 * 3�������Ϊ ��ȡ��������������
 * 4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
 */
class Cube
{
public:
	//���ó�
	void setL(int l)
	{
		m_l = l;
	}

	//��ȡ��
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
	//������Ա�ȽϺ���
	void isSame1(Cube &c)
	{
		if (m_l == c.getL()&&m_w == c.getW()&&m_h == c.getH())
		{
			std::cout << "������������ȫ��ͬ"<<std::endl;
		}else
		{
			std::cout << "���������岻��ͬ"<<std::endl;
		}
	}

private:
	//��
	int m_l;
	//��
	int m_w;
	//��
	int m_h;
};

//ȫ�ֺ����ж������������Ƿ���ȫ��ͬ
void isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		std::cout << "c1��c2��ȫ��ͬ" << std::endl;
	}
	else
	{
		std::cout << "���������岻��ͬ" << std::endl;
	}
}

int main(int argc, char* argv[])
{
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	//ʵ�����µ�������c2
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	//ʹ��ȫ�ֺ��������ж�
	isSame(c1, c2);
	//ʹ�ó�Ա���������ж�
	c1.isSame1(c2);
	std::cout << "������������Ϊ��" << c1.calculateArea() << std::endl;
	std::cout << "������������Ϊ��" << c1.calculateVolume() << std::endl;

	system("pause");
	return 0;
}
