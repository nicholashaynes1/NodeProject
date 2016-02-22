/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: nhay7834
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_
#include "ArrayNode.h"

template<class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
public:
	CTECList();
	virtual ~CTECList();
	void addAtIndex();
	void addToFront();
	void addToEnd();
	Type removeFromPosition();
	Type removeFromFront();
	Type removeFromBack();
	Type getEnd();
	Type getFront();
	Type getPosition();
	Type set(int index, const Type& Value);
};

#endif /* MODEL_CTECLIST_H_ */
