#ifndef EDGE_H
#define EDGE_H

#include "vertex.h"

class Edge
{
    private:
        Vertex* vertexOne;
        Vertex* vertexTwo;

    public:
        Edge();
        Edge(Vertex* one, Vertex* two);
        ~Edge(){}

        Vertex* getVertexOne() const;
        Vertex* getVertexTwo() const;

        void setVertexOne(Vertex* one);
        void setVertexTwo(Vertex* two);
};

#endif