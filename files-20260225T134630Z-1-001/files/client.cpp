#include "client.h"
#include "train.h"
#include "tram.h"
#include <iostream>

// Implémentation de la méthode accept pour ConcreteClient

void client::accept(train *visitor)
{
	visitor->visit(this);
}

void client::accept(tram *visitor2)
{
	visitor2->visit(this);
}

void client::setPosition(int x, int y)
{
	positionX = x;
	positionY = y;
}
int client::getX()
{
	return positionX;
}

int client::getY()
{
	return positionY;
}

client::~client()
{
}

client::client()
{

	positionX = 5;
	positionY = 5;
}
