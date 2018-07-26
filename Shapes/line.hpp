#ifndef _LINE_HPP
#define _LINE_HPP

#include "point.hpp"
#include "shape.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class Line : public Shape
{

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	Line(const Point & _point1, const Point & _point2)
	:m_point1( _point1 ), m_point2( _point2 )
	{}

	Line(const Line & _line) = delete;
	Line( Line && _line) = delete;
	Line & operator = (const Line & _line) = delete;

	void Draw() const override;
	double Area() const override;
	double Perimetr() const override;



	~Line(){}

//*-------------------------------------------------------------------------------------------------------------------------------------------*//
			
private:

	Point m_point1;
	Point m_point2;

};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


#endif // !_LINE_HPP