//
//  UndirectedGraph.cpp
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/22/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
//

#include "UndirectedGraph.h"
#include <iostream>
#include "graph.h"
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

UndirectedGraph::UndirectedGraph(){}

UndirectedGraph::UndirectedGraph(vector <Vertex>& Vertices, vector <Edge>& Edges)
{
    VertexVector = Vertices;
    EdgesVector = Edges;
}

UndirectedGraph::UndirectedGraph(UndirectedGraph& UG)
{
    VertexVector = UG.VertexVector;
    EdgesVector = UG.EdgesVector;
}

UndirectedGraph::~UndirectedGraph()
{
    //destructor
}

bool UndirectedGraph::addVertex(Vertex& v)
{
    VertexVector.push_back(v);
    return true;
}

bool UndirectedGraph::removeVertex(Vertex &v)
{
    for(unsigned int i = 0; i < VertexVector.size(); i++)
    {
        if(VertexVector[i].getID() == v.getID())
        {
            VertexVector.erase(VertexVector.begin() + i);
            return true;
        }
    }
    return false;
}
























