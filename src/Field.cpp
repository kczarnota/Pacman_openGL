#include "Field.h"


Field::Field(float x, float y, bool s, bool c, bool f)
{
	positionX = x;
	positionY = y;
	solid = s;
	containPoint = c;
	fruit = f;
}


Field::~Field()
{
}


bool Field::conteins(float x, float y)
{
	if (x > positionX - 0.96 && x < positionX + 2.96 && y > positionY - 0.96 && y < positionY + 2.96)
		return true;
	
	return false;
}

float Field::getX()
{
	return positionX;
}

float Field::getY()
{
	return positionY;
}

bool Field::isSolid()
{
	return solid;
}

bool Field::getPoint()
{
	return containPoint;
}

void Field::setPoint(bool s)
{
	containPoint = s;
}

void Field::setFruit(bool f)
{
	fruit = f;
}

bool Field::getFruit()
{
	return fruit;
}