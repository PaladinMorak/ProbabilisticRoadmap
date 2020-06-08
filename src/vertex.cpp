#include "vertex.h"

Vertex::Vertex(){}

Vertex::Vertex(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}

double Vertex::getXCoordinate() const
{
    return xCoordinate;
}

double Vertex::getYCoordinate() const
{
    return yCoordinate;
}

void Vertex::setXCoordinate(double x)
{
    xCoordinate = x;
}

void Vertex::setYCoordinate(double y)
{
    yCoordinate = y;
}
