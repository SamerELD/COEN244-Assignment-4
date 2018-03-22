//
//  vertex.cpp
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/18/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
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
