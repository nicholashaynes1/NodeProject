/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: nhay7834
 */

#include "CTECArray.h"
using namespace std;
template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;

}
template<class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template<class Type>
Type* CTECArray<Type>::get(int pos)
{
	if (pos >= size || pos < 0)
	{
		cerr << "position value is out of bounds:(" << endl;
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= pos; spot++)
		{
			if (spot != pos)
			{
				current = current->next;
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template<class Type>
int CTECArray<Type>::getSize()
{
	return this->size;
}

template<class Type>
void CTECArray<Type>::set(int pos, Type value)
{
	if (pos >= size || pos < 0)
	{
		cerr << "position value is out of bounds:(" << endl;
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= pos; spot++)
		{
			if (spot != pos)
			{
				current = current->next;
			}
			else
			{
				current->setValue(value);
			}
		}

}

}
