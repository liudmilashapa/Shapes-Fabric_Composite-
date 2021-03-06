#ifndef _POINT_HPP
#define _POINT_HPP


//*-------------------------------------------------------------------------------------------------------------------------------------------*//

class Point
{

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

public:

	Point(){}
	
	Point(double _x, double _y)
	:m_x( _x ), m_y( _y )
	{}

	Point(const Point & _point)
	:Point(_point.getX(), _point.getY()) 
	{}

	explicit Point(const Point && _point);

 	Point & operator = ( const Point & _point );
	bool operator ==( const Point & _point );

	~Point() {}

	double getX() const;
	double getY() const;

//*-------------------------------------------------------------------------------------------------------------------------------------------*//

private:

	double m_x;
	double m_y;

};

//*-------------------------------------------------------------------------------------------------------------------------------------------*//


#endif // !_POINT_HPP

