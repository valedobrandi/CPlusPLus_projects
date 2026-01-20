#ifndef POINT_CLASS_H
#define POINT_CLASS_H

#include "Fixed.hpp"

class Point {

    private:

        Fixed _x;
        Fixed _y;

    public:

        Point( void );
		Point(const Point& other );
        Point& operator=( const Point& rhs );
        ~Point( void );

        Point( float, float );

        Fixed get_x() const;
        Fixed get_y() const;

        friend Point operator-(const Point& lhs, const Point& rhs);
        friend std::ostream& operator<<(std::ostream& out, const Point& value);

};

#endif