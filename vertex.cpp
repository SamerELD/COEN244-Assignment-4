//
//  vertex.cpp
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#include "vertex.h"
using namespace std;

Vertex::Vertex()
{
    ID=0;
    VALUE=0;
}

Vertex::Vertex(int id,int value)
{
    ID=id;
    VALUE=value;
}

Vertex::Vertex(const Vertex& V)
{
    ID = V.ID;
    VALUE = V.VALUE;
}

void Vertex::setID(int id)
{
    ID=id;
}

void Vertex::setValue(int value)
{
    VALUE=value;
}

int Vertex::getID() 
{
    return ID;
}

int Vertex::getValue()
{
    return VALUE;
}

Vertex::~Vertex()
{
    //destructor
};
