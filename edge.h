//
//  edge.h
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#ifndef edge_h
#define edge_h

#include <iostream>
#include "vertex.h"
#include <vector>


class Edge
{
    
public:
    Edge();                            //default constructor
    Edge(int, Vertex&, Vertex&);    //constructor
    Edge(const Edge&);                    //copy constructor
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
