//
//  graph.cpp
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/18/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
//

#include "graph.h"
#include <iostream>
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

Graph::Graph(){}


Graph::Graph(vector <Vertex>& Vertices, vector <Edge>& Edges)
{
    VertexVector = Vertices;
    EdgesVector = Edges;
}


Graph::Graph(Graph& G)
{
    VertexVector = G.VertexVector;
    EdgesVector = G.EdgesVector;
}


Graph::~Graph()
{
    //destructor
}

