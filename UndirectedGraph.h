//
//  UndirectedGraph.h
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#ifndef UndirectedGraph_h
#define UndirectedGraph_h

#include <iostream>
#include "graph.h"
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

class UndirectedGraph : public Graph{
    
public:
    UndirectedGraph();
    UndirectedGraph(vector <Vertex>&, vector <Edge>&);
    UndirectedGraph(const UndirectedGraph &);
    virtual ~UndirectedGraph();
    
    virtual bool addVertex(Vertex& v);            //adds one vertex; returns bool if added successfully.
    virtual bool removeVertex(Vertex& v);        //removes a vertex; the edges that have connection with this vertex need to //be removed;
    
    virtual bool addEdge(Edge& e);             //adds an edge; returns true if the edge is added successfully.
    virtual bool remove(Edge& e);            // remove the edge
    
    virtual bool searchVertex(Vertex& v); // returns bool if a vertex exists in a graph.
    virtual bool searchEdge(Edge& e);        // returns bool if an Edge exists in a graph.
    
    virtual void display(Vertex& v);         // displays the path that contains the vertex.
    virtual void display(Edge& e);        // displays the path that contains the edge.
    
   // virtual void display() const;                // displays the whole graph with your own defined format
    
   // virtual string toString () const;            // converts the whole graph to a string such as 1-2-4-5; 1-3-5; each path // is separated by ';'
    
    virtual bool clean();                 //remove all the vertices and edges;
    

};

#endif /* UndirectedGraph_h */
