#ifndef VERTEX_H
#define VERTEX_H

class Vertex
{
    private:
        double xCoordinate;
        double yCoordinate;

    public:
        Vertex();
        Vertex(double xCoordinate, double yCoordinate);
        ~Vertex(){}

        double getXCoordinate() const;
        double getYCoordinate() const;

        void setXCoordinate(double x);
        void setYCoordinate(double y);

};

#endif