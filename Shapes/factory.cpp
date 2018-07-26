#include "factory.hpp"
#include "shape.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"
#include "composite.hpp"




//*-------------------------------------------------------------------------------------------------------------------------------------------*//

std::unique_ptr < Line > ShapeFactory::createLine(const Point & _point1, const Point & _point2) const
{
	return std::unique_ptr < Line > (new Line( _point1,  _point2));
}

std::unique_ptr < Rectangle > ShapeFactory::createRectangle(const Point & _Upper_Left, const Point & _Lower_Right) const
{
	return std::unique_ptr < Rectangle > (new Rectangle( _Upper_Left, _Lower_Right));
}

std::unique_ptr < Triangle > ShapeFactory::createTriangle(const Point & _point1, const Point & _point2, const Point & _point3) const
{
	return std::unique_ptr < Triangle > (new Triangle( _point1, _point2, _point3));
}

std::unique_ptr < Composite > ShapeFactory::createComposite () const
{
	return std::unique_ptr < Composite > (new Composite());
}



//*-------------------------------------------------------------------------------------------------------------------------------------------*//

