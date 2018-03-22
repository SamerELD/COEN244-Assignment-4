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
    Weight = 0;
}

Edge::Edge(int w, Vertex &start, Vertex &end)
{
    Weight = w;
    StartingVertex = start;
    EndingVertex = end;
}

Edge::Edge( Edge & E)
{
    Weight = E.Weight;
    StartingVertex = E.StartingVertex;
    EndingVertex = E.EndingVertex;
}


void Edge::setWeight(int w)
{
    Weight = w;
}

int Edge::getWeight()
{
    return Weight;
}

void Edge::setVertices(Vertex& Start, Vertex& End)
{
    StartingVertex = Start;
    EndingVertex = End;
}

Vertex Edge::getStartingVertex()
{
    return StartingVertex;
}

Vertex Edge::getEndingVertex()
{
    return EndingVertex;
}

Edge::~Edge()
{
    //destructor
}
