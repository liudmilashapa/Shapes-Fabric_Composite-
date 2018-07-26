#include <algorithm>
#include "composite.hpp"
#include "shape.hpp"

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

void Composite::Draw()const
{

}


double Composite::Area() const
{
	double sum=0;
	for ( auto const & shape : m_Components)
	{
		sum+=shape->Area();
	}
	return sum;
}

double Composite::Perimetr()const
{
	double sum=0;
	for ( std::unique_ptr <Shape > const & shape : m_Components)
	{
		sum+=shape->Perimetr();
	}
	return sum;
}


void Composite::addShape(std::unique_ptr<Shape> _component)
{
	
	m_Components.push_back( std::unique_ptr< Shape >( std::move( _component ) ) );

}


void Composite::removeShape(const Shape &  _component)
{
	auto it = std::remove_if(
			m_Components.begin()
		,	m_Components.end()
		,	[ &_component ] ( std::unique_ptr< Shape > const & _shape ) -> bool
		{
			return( &_component == _shape.get() );
		}
	);

	m_Components.erase(it, m_Components.end());
}

int Composite::componentsQuantity() const
{
	return m_Components.size();
}

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


Composite::~Composite()
{
}

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

