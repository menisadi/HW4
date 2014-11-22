#include "Point.h"
#include "Polygon.h"
#include <iostream>

using std::cout;
using std::endl;
using std::vector;


Polygon::Polygon() {}

Polygon::Polygon(const Polygon& aPolygon)
{
	_points.resize(aPolygon.getPoint.size());

	for (unsigned i = 0; i < _points.size(); ++i)
		_points[i]  = new Point(*(aPolygon.getPoint[i]));
	
}

Polygon::~Polygon() {
	clear();
}

void Polygon::addPoint(Point* p) {
	Point* newp = new Point; //create a copy of the original pt
	newp->setX(p->getX());
	newp->setY(p->getY());
	_points.push_back(newp);
}

Point* Polygon::getPoint(int index) {
	return _points.at(index);
}

int Polygon::getNumOfPoints() {
	return _points.size();
}

void Polygon::clear()
{
	vector<Point*>::iterator iter = _points.begin();
	cout << "DELETING POLYGON: BEGIN" << endl;
	while (iter != _points.end()) {
		cout << "  deleting point: ";
		cout << (*iter)->getX() << " ";
		cout << (*iter)->getY() << " ";
		cout << endl;
		delete (*iter);
		iter++;
	}
	cout << "DELETING POLYGON: END" << endl;
}

Polygon* Polygon::copy() const
{
	if (0 == this) {
		return 0;
	}
	else {
		Polygon *newPoly = new Polygon(this);
		return newPoly;
	}
}

Polygon & Polygon::operator=(const Polygon &P)
{
	// check for "self assignment" and do nothing in that case
	if (this == &P) {
		return *this;
	}
	clear();
	_points = P.copy();
	// return this List
	return *this;
}