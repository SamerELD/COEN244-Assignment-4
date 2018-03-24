//
//  edge.cpp
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#include "edge.h"
#include "vertex.h"
#include <vector>
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

Edge::Edge(const Edge & E)
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
