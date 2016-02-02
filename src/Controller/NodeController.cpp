/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: nhay7834
 */
#include "NodeController.h"
#include <iostream>
using namespace std;

NodeController :: NodeController()
{
 //auto-generated constructor

	stringNode.setValue("hgjkghdfghfkjlgjkldhg");
	intNode.setValue(3);

	stringArrayNode.setValue("Words");
	otherArrayNode.setValue("linked node");
	stringArrayNode.setNext(&otherArrayNode);


}

NodeController :: ~NodeController()
{
	//auto-generated destructor
}



void NodeController :: start()
{
	cout << "the contents of stringNode are " << stringNode.getValue() << endl;
	cout << "the contents of StringArrayNode are: " << stringArrayNode.getValue() << endl;
	cout << "this is connected to StringArrayNext: " << (*stringArrayNode.getNext()).getValue() << endl;
}
