#include <utility>

#include "Point.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//


Point::Point(const Point && _point)
{
	m_x = std::move(_point.getX());
	m_y = std::move(_point.getY());
}

Point & Point::operator = (const Point & _point)
{
	m_x = _point.getX(),
	m_y = _point.getY();
	return * this;
}

bool Point::operator == (const Point & _point)
{
	return (m_x == _point.getX()) 
		    && (m_y == _point.getY());
}


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

double Point::getX() const
{
	return m_x;
}

double Point::getY() const
{
	return m_y;
}


//*-------------------------------------------------------------------------------------------------------------------------------------------*//