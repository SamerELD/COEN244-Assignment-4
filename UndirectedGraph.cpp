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

        	for(unsigned int j = 0; j < EdgesVector.size(); j++)
        	{
        		if(EdgesVector[j].getEndingVertex().getID() == v.getID())
        		{
        			EdgesVector.erase(EdgesVector.begin() + j);
        		}
        	}

            VertexVector.erase(VertexVector.begin() + i);
            return true;
        }
    }
    return false;
}


bool UndirectedGraph::addEdge(Edge &e)
{
	EdgesVector.push_back(e);
	return true;
}

bool UndirectedGraph::remove(Edge &e)
{
	 for(unsigned int i = 0; i < EdgesVector.size(); i++)
	    {
	        if(EdgesVector[i].getWeight() == e.getWeight())
	        {
	            EdgesVector.erase(EdgesVector.begin() + i);
	            return true;
	        }
	    }
	    return false;
}


bool UndirectedGraph::searchVertex(Vertex &v)
{
	for(unsigned int i = 0; i < VertexVector.size(); i++)
	{
		if(VertexVector[i].getID() == v.getID())
		{
			return true;
		}
	}
	return false;
}

bool UndirectedGraph::searchEdge(Edge &e)
{
	for(unsigned int i = 0; i < EdgesVector.size(); i++)
	{
		if(EdgesVector[i].getWeight() == e.getWeight())
		{
			return true;
		}
	}
	return false;
}

























