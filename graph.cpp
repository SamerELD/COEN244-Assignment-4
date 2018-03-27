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

//operator overloading

bool Graph::operator==(Graph & G)
{
    for(unsigned int i = 0; i<VertexVector.size(); i++)
    {
        if(VertexVector[i].getID() != G.VertexVector[i].getID())
        {
            return false;
        }
    }
    
    for(unsigned int i = 0; i<EdgesVector.size(); i++)
    {
        if(EdgesVector[i].getWeight() != G.EdgesVector[i].getWeight())
        {
            return false;
        }
    }
    
    for(unsigned int i = 0; i<G.VertexVector.size(); i++)
    {
        if(G.VertexVector[i].getID() != VertexVector[i].getID())
        {
            return false;
        }
    }
    
    for(unsigned int i = 0; i<G.EdgesVector.size(); i++)
    {
        if(G.EdgesVector[i].getWeight() != EdgesVector[i].getWeight())
        {
            return false;
        }
    }
    
    return true;

}

void Graph::operator=(Graph & G)
{
    VertexVector = G.VertexVector;
    EdgesVector = G.EdgesVector;
}

void Graph::operator++()
{
    for( unsigned int i = 0; i < EdgesVector.size(); i++)
    {
        EdgesVector[i].setWeight(EdgesVector[i].getWeight() + 1);
    }
}

void Graph::operator++(int)
{
    for( unsigned int i = 0; i < EdgesVector.size(); i++)
    {
        EdgesVector[i].setWeight(EdgesVector[i].getWeight() + 1);
    }
}


bool Graph::operator>(Graph &G)
{
    int Sum1 = 0, Sum2 = 0;
    
    for( unsigned int i=0; i < EdgesVector.size(); i++ )
    {
        Sum1 = Sum1 + EdgesVector[i].getWeight();
    }
    
    for( unsigned int j=0; j < G.EdgesVector.size(); j++ )
    {
        Sum2 = Sum2 + G.EdgesVector[j].getWeight();
    }
    
    if(Sum1>Sum2){
        return true;
    }
    else
    {
        return false;
    }
    
}

ostream &operator<<( ostream& output, Graph& G)
{
    cout<<endl;
    
    cout<<"In the form of 'Vertex#(ID)'..."<<endl;
    cout<<"The vertices of the graph are...";
    for(unsigned int i = 0; i < G.VertexVector.size(); i++)
    {
        output<<G.VertexVector[i].getValue()<<"("<<G.VertexVector[i].getID()<<") ";
    }
    
    cout<<endl<<endl;
    
    cout<<"In the form of 'Weight(Starting Vertex,Ending Vertex)'..."<<endl;
    cout<<"The connections of the graph are..."<<endl;
    
    for(unsigned int i = 0; i < G.EdgesVector.size(); i++)
    {
         output<< G.EdgesVector[i].getWeight()<<"("<<G.EdgesVector[i].getStartingVertex().getValue()<<","<<G.EdgesVector[i].getEndingVertex().getValue()<<")"<<endl;
    }
    return output;
}

















