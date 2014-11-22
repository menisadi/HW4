//Note: WE HAVE NOT IMPLEMENTED IN THIS
//CLASS A COPY CONSTRUCTOR AND OPERATOR=
#ifndef __POLYGON_H
#define __POLYGON_H

#include "Point.h"
#include <vector>

class Polygon {
public:
	/**
	 *default constructor
	 */
	Polygon();
	/*
	 * destructor- notice the "deep" delete
	 */
	virtual ~Polygon();
	/**
	 * adds point p to _points
	 * @param: p the point to be added
	 */
	void addPoint(Point* p);
	/**
	 * @return a pointer to the point at _points(index)
	 */
	Point* getPoint(int index);
	/**
	 * @return the size of _points
	 */
	int getNumOfPoints();

	void Polygon::clear();
	Polygon* Polygon::copy() const;


private:
	/**
	 * the actual vector the points are held in.
	 */
	std::vector<Point*> _points;
};

#endif
