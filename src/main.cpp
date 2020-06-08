#include <iostream>

#include "vertex.h"
#include "edge.h"

int main(int argc, char ** argv)
{
    Vertex* one = new Vertex(0, 0);
    Vertex* two = new Vertex(1.0, 1.0);
    Edge* firstEdge = new Edge(one, two);

    std::cout << "The Coordinates for the First Vertex of the Edge are: "
              << firstEdge->getVertexOne()->getXCoordinate() << ", " << firstEdge->getVertexOne()->getYCoordinate()
              << "\nThe Coordinates for the second vertex of the edge are: "
              << firstEdge->getVertexTwo()->getXCoordinate() << ", " << firstEdge->getVertexTwo()->getYCoordinate() << std::endl;

    return 0;
}