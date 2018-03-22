//
//  edge.h
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/18/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
//

#ifndef edge_h
#define edge_h

#include <iostream>
#include "vertex.h"

class Edge
{

public:
    Edge();							//default constructor
    Edge(int, Vertex&, Vertex&);	//constructor
    Edge(Edge&);					//copy constructor
    ~Edge();

    void setWeight(int);
    int getWeight();

    void setVertices(Vertex&, Vertex&);
    Vertex getStartingVertex();
    Vertex getEndingVertex();

private:
    int Weight;
    Vertex StartingVertex;
    Vertex EndingVertex;
};
#endif /* edge_h */
