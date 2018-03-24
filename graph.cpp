//
//  graph.cpp
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#include "graph.h"
#include <iostream>
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

Graph::Graph()
{
    VertexVector[0];
    EdgesVector[0];
}


Graph::Graph(vector <Vertex>& Vertices, vector <Edge>& Edges)
{
    VertexVector = Vertices;
    EdgesVector = Edges;
}


Graph::Graph(const Graph& G)
{
    VertexVector = G.VertexVector;
    EdgesVector = G.EdgesVector;
}


Graph::~Graph()
{
    //destructor
}

