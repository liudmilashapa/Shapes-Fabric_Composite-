#ifndef _RECTANGLE_HPP
#define _RECTANGLE_HPP

#include "shape.hpp"
#include "point.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class Rectangle: public Shape

{

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	Rectangle(const Point & _Upper_Left, const Point & _Lower_Right)
	:m_Upper_Left(_Upper_Left), m_Lower_Right(_Lower_Right)
	{}

	Rectangle(const Rectangle & _rectangle) = delete;
	Rectangle(Rectangle && _rectangle)=delete;
	Rectangle & operator = (const Rectangle & _rectangle) = delete;

	void Draw() const override;
	double Area() const override;
	double Perimetr() const override;



	~Rectangle(){}

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

private:

	Point m_Upper_Left;
	Point m_Lower_Right;


};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


#endif // !_RECTANGLE_HPP