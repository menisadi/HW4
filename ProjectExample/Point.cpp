#include "Point.h"
/**
 *  THIS IS THE IMPLEMENTATION FILE OF CLASS POINT (Point.cpp)
 */

Point::Point() :
	_x(0), _y(0) {
}

Point::Point(double xval, double yval) :
	_x(xval), _y(yval) {
}

Point::Point(const Point& aPoint) {
	_x = aPoint.getX;
	_y = aPoint.getY;
}

void Point::move(double dx, double dy) {
	_x = _x + dx;
	_y = _y + dy;
}
double Point::getX() const {
	return _x;
}
double Point::getY() const {
	return _y;
}
void Point::setX(double x){
	_x=x;
}
void Point::setY(double y){
	_y=y;
}

