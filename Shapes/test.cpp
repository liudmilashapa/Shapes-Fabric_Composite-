#include <assert.h>
#include <list>

#include "composite.hpp"
#include "line.hpp"
#include "point.hpp"
#include "rectangle.hpp"
#include "shape.hpp"
#include "triangle.hpp"

#include "factory.hpp"



int main()
{
	Point a( 1, 1 ), b, c , d;

	b = c = d = a;

	

	Point point1 (0,0); 
	Point point2 (1,1); 
	Point point3 (2,2); 
	Point point4 (3,4); 
	Point point5 (3,3); 

	
	ShapeFactory factory;

	std::unique_ptr< Composite > composite1 ( factory.createComposite() );
	
	std::unique_ptr< Shape > shape1 (factory.createRectangle(point1, point2) );
	Shape const & shape1Ref = *shape1;
	std::unique_ptr< Shape > shape2 ( factory.createTriangle(point1, point2, point4) );
	Shape const & shape2Ref = *shape2;

	composite1->addShape( std::move( shape1 ) );

	assert(composite1->componentsQuantity()==1);
	assert(fabs(composite1->Perimetr() - shape1Ref.Perimetr() ) < 0.001 );
	
	composite1->addShape( std::move( shape2 ) );
	
	assert(composite1->componentsQuantity()==2);
	assert(fabs( composite1->Perimetr()-(shape1Ref.Perimetr() + shape2Ref.Perimetr()))< 0.001);
	
	composite1->removeShape(shape1Ref);
	
	assert(composite1->componentsQuantity()==1);
	
	std::unique_ptr< Composite > composite2 ( factory.createComposite() );
	std::unique_ptr< Shape > shape3 ( factory.createRectangle(point4, point2) );
	std::unique_ptr< Shape > shape4 ( factory.createTriangle(point1, point5, point4) );
	
	assert(composite2->componentsQuantity()==0);
	
	composite2->addShape( std::unique_ptr< Shape >( composite1.release() ) );
	composite2->addShape( std::move( shape3 ) );
	composite2->addShape( std::move( shape4 ) );
	
	assert(composite2->componentsQuantity()==3);
	
}