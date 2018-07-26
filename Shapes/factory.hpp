#ifndef _SHAPEFACTORY_HPP
#define _SHAPEFACTORY_HPP

#include <memory>
#include "point.hpp"

class Shape;
class Line;
class Rectangle;
class Triangle;
class Composite;

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class ShapeFactory
{

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	ShapeFactory () {}

	ShapeFactory(const ShapeFactory & _factory) = delete;
	ShapeFactory & operator = (const ShapeFactory & _factory) = delete;

	std::unique_ptr < Line > createLine ( const Point & _point1, const Point & _point2) const;
	std::unique_ptr < Triangle > createTriangle ( const Point & _point1, const Point & _point2, const Point & _point3) const;
	std::unique_ptr < Rectangle > createRectangle (	const Point & _Upper_Left, const Point & _Lower_Right) const;
	std::unique_ptr < Composite > createComposite () const;

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

private:

};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

#endif !_SHAPEFACTORY_HPP