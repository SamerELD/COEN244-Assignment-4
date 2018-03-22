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
    Edge();
    Edge(int,Vertex& ,Vertex&);
    void setWeight(int);
    int getWeight();
    ~Edge();
private:
    int weight;
    Vertex *startingVertex;
    Vertex *endingVertex;
};
#endif /* edge_h */
