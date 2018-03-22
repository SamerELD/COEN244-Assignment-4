//
//  graph.h
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/18/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
//

#ifndef graph_h
#define graph_h

#include <iostream>
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

class Graph {
    
public:
    Graph();
    Graph(vector <Vertex>&, vector <Edge>&);
    Graph(Graph &);
    virtual ~Graph();
    
    virtual bool addVertex(Vertex& v)=0;            //adds one vertex; returns bool if added successfully.
    virtual bool removeVertex(Vertex& v) = 0;        //removes a vertex; the edges that have connection with this vertex need to //be removed;
    
    virtual bool addEdge(Edge& e) = 0;                //adds an edge; returns true if the edge is added successfully.
    virtual bool remove(Edge& e) = 0;                // remove the edge
    
    virtual bool searchVertex(const Vertex& v) = 0; // returns bool if a vertex exists in a graph.
    virtual bool searchEdge(const Edge& e) = 0;        // returns bool if an Edge exists in a graph.
    
    virtual void display(Vertex& v) const = 0;         // displays the path that contains the vertex.
    virtual void display(Edge& e) const = 0;        // displays the path that contains the edge.
    
    virtual void display() const = 0;                // displays the whole graph with your own defined format
    
    virtual string toString () const = 0;            // converts the whole graph to a string such as 1-2-4-5; 1-3-5; each path // is separated by ';'
    
    virtual bool clean() = 0;                     //remove all the vertices and edges;
    
private:
    vector <Vertex> VertexVector;
    vector <Edge> EdgesVector;
    
};

#endif /* graph_h */


