#include "edge.h"

Edge::Edge(){}

Edge::Edge(Vertex* one, Vertex* two)
{
    vertexOne = one;
    vertexTwo = two;
}

Vertex* Edge::getVertexOne() const
{
    return vertexOne;
}

Vertex* Edge::getVertexTwo() const
{
    return vertexTwo;
}

void Edge::setVertexOne(Vertex* one)
{
    vertexOne = one;
}

void Edge::setVertexTwo(Vertex* two)
{
    vertexTwo = two;
}