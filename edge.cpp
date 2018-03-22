//
//  edge.cpp
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/18/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
//

#include "edge.h"
#include "vertex.h"
using namespace std;

Edge::Edge()
{
    weight = 0;
    startingVertex = nullptr;
    endingVertex = nullptr;
}

Edge::Edge(int w,Vertex &start, Vertex &end)
{
    weight = w;
    startingVertex = &start;
    endingVertex = &end;
}

void Edge::setWeight(int w)
{
    weight = w;
}

Edge::~Edge()
{
    //
}
