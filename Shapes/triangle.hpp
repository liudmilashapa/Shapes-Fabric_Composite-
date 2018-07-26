#ifndef _TRIANGLE_HPP
#define _TRIANGLE_HPP

#include "shape.hpp"
#include "point.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class Triangle: public Shape

{

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	Triangle(const Point & _point1, const Point & _point2, const Point & _point3)
	:m_point1( _point1 ), m_point2( _point2 ), m_point3( _point3 )
	{}

	Triangle(const Triangle & _triangle) = delete;
	Triangle(Triangle && _triangle)=delete;

	Triangle & operator = (Triangle const & _triangle) = delete;

	void Draw() const override;
	double Area() const override;
	double Perimetr() const override;



	~Triangle(){}

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

private:

	Point m_point1;
	Point m_point2;
	Point m_point3;


};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

#endif // !_TRIANGLE_HPP
