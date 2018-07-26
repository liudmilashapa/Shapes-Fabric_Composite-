#include <utility>
#include <math.h>
#include "triangle.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

void Triangle::Draw() const {}

double Triangle::Area() const { return 0;}

double Triangle::Perimetr() const
{
		return (pow 
			( pow( m_point1.getX() - m_point2.getX(), 2)  
			     + pow( m_point1.getY() - m_point2.getY(), 2)
			   , 1/2)	
			   + pow (
			     pow( m_point1.getX() - m_point3.getX(), 2)  
			     + pow( m_point1.getY() - m_point3.getY(), 2)
				 , 1/2)	
			   + pow (pow( m_point3.getX() - m_point2.getX(), 2)  
			     + pow( m_point3.getY() - m_point2.getY(), 2)
				 , 1/2)
			   );
	
}


//*-------------------------------------------------------------------------------------------------------------------------------------------*//


//*-------------------------------------------------------------------------------------------------------------------------------------------*//