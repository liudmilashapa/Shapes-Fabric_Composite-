#ifndef _COMPOSITE_HPP
#define _COMPOSITE_HPP

#include <memory>
#include <list>
#include "shape.hpp"


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class Composite: public Shape
{

	//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	Composite(){}

	Composite(const Composite & _comp) = delete;
	Composite(Composite && _comp) = delete;

	virtual void Draw()const;
	virtual double Area()const;
	virtual double Perimetr()const;
	void addShape(std::unique_ptr<Shape> _component);
	void removeShape(const Shape &  _component);

	virtual Composite * getComposite() { return this; }

	int componentsQuantity() const;

	~Composite();

	//*-------------------------------------------------------------------------------------------------------------------------------------------*//

private:

	std::list <std::unique_ptr < Shape> > m_Components;
	std::list <std::unique_ptr < Shape> >::iterator iteratorList;

	
};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


#endif // !_COMPOSITE_HPP
