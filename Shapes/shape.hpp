#ifndef _SHAPE_HPP
#define _SHAPE_HPP


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class Shape

{

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	Shape() = default;

	Shape( const Shape & ) = delete;
	Shape(const Shape &&) = delete;
	const Shape & operator =(const Shape &) = delete;
	
	virtual void Draw()const = 0;
	virtual double Area()const = 0;
	virtual double Perimetr()const = 0;

	virtual ~Shape() = default;


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

private:

};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


#endif // !_SHAPE_HPP