#include <utility>
#include <math.h>
#include "rectangle.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//


double Rectangle::Perimetr() const
{
	double lenght1 = m_Lower_Right.getX() - m_Upper_Left.getX();
	double lenght2 = m_Lower_Right.getY() - m_Upper_Left.getY();
	return ((fabs(lenght1) + fabs(lenght2)) * 2);
}

double Rectangle::Area() const 
{
	double lenght1 = m_Lower_Right.getX() - m_Upper_Left.getX();
	double lenght2 = m_Lower_Right.getY() - m_Upper_Left.getY();
	return (lenght1 * lenght2);
}

void Rectangle::Draw() const 
{}

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


//*-------------------------------------------------------------------------------------------------------------------------------------------*//