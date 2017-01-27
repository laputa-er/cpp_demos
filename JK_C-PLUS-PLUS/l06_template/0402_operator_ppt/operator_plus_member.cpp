#include <iostream>
using namespace std;

/*
* 重载加号(成员函数重载)
*/
class Coordinate
{
public:
	Coordinate(int x, int y) {
		m_iX = x;
		m_iY = y;
	}
	// 成员函数重载
	Coordinate operator+(const Coordinate &coor)
	{
		Coordinate temp(0, 0);
		temp.m_iX = this->m_iX + coor.m_iX;
		temp.m_iY = this->m_iY + coor.m_iY;

		return temp;
	}
private:
	int m_iX;
	int m_iY;
};

int main(void)
{
	Coordinate coor1(3, 5);
	Coordinate coor2(1, 1);
	Coordinate coor3(0, 0);
	coor3 = coor1 + coor2; // coor1.operator+(coor2)

	return 0;
}