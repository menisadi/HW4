#include <iostream>
#include "LinkedList.h"

void traverseList(const List& ls)
{
	for(const Link* it = ls.getHead(); it; it = it->getNext())
	{
		std::cout << it->getData() << std::endl;
	}	
	

}

int main()
{
	List l1;
	List l2;

	l1.insertData("a");
	l1.insertData("b");
	l1.insertData("c");

	l2.insertData("1");
	l2.insertData("2");
	l2.insertData("3");

	std::cout << "Traversing list l1:\n";
	traverseList(l1);

	
	std::cout << "Traversing list l2:\n";
	traverseList(l2);

	//Applying List's copy ctor.

	List l3 = l1;

	std::cout << "Traversing list l3:\n";
	traverseList(l3);

	//Applying List's copy assignment operator.
	l2 = l1;

	std::cout << "Traversing list l2:\n";
	traverseList(l2);

	// checking for self assignment
	l1 = l1;
	std::cout << "Traversing list l1:\n";
	traverseList(l2);

	
}
