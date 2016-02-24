/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: nhay7834
 */

#include "CTECList.h"
#include <iostream>
template<class Type>

CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template<class Type>
CTECList<Type>::~CTECList()
{

}

template<class Type>
void CTECList<Type>:: addAtIndex(int index, const Type& value)
{

}

template<class Type>
void CTECList<Type>::addToEnd(const Type& value)
{

}

template<class Type>
void CTECList<Type>::addToFront(const Type& value)
{

}
template<class Type>
Type CTECList<Type>::removeFromFront()
{
	Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	thingToRemove = this->head->getValue();
	delete this-> head;

	this->head = newHead;


	return thingToRemove;



}
