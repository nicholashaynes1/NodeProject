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
notHipsterInts = new CTECArray<int>(5);
}

NodeController :: ~NodeController()
{
	//auto-generated destructor
}



void NodeController :: start()
{
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index *23));
	}

	for(int index = notHipsterInts -> getSize() -  1; index >=0; index --)
	{
		cout << "the contents of not hipster ints array node " << index << " are " << notHipsterInts->get(index) << endl;
	}


}
