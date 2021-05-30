#include "Squad.hpp"

Squad::Squad(): _count(0), _unit(nullptr)
{
}

Squad::~Squad()
{
	if (_unit == nullptr)
		return ;
	for (int i = 0; i < _count; i++)
		delete _unit[i];
	delete [] _unit;
}

Squad::Squad(const Squad & other)
{
	this->_count = 0;
	for(int i = 0; i < other.getCount(); i++)
	{
		this->push(other.getUnit(i)->clone());
	}
}

Squad&		Squad::operator=(const Squad & other) {
	if(this->_unit)
	{
		this->_count = 0;
		for(int i = 0; i < other.getCount(); i++)
		{
			this->push(other.getUnit(i)->clone());
		}
	}
    return *this;
}


int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int num) const
{
	if (num > this->getCount() - 1 || num < 0)
		return (nullptr);
	return (this->_unit[num]);
}


int Squad::push(ISpaceMarine* new__unit)
{
	if (!this->_unit)
		return(0);
	else if (this->_count == 0)
	{
		this->_unit = new ISpaceMarine*[1];
		this->_unit[0] = new__unit;
		this->_count++;
	}
	else
	{
		for (int i = 0; i < _count; i++)
			if (_unit[i] == new__unit)
				return (-1);
		ISpaceMarine **copy = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			copy[i] = this->_unit[i];
		copy[_count] = new__unit;
		_count++;
		delete [] _unit;
		_unit = copy;
	}
	return (_count);
}