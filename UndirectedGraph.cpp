//
//  UndirectedGraph.cpp
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#include "UndirectedGraph.h"
#include <iostream>
#include "graph.h"
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

UndirectedGraph::UndirectedGraph()
{
    VertexVector[0];
    EdgesVector[0];
}

UndirectedGraph::UndirectedGraph(vector <Vertex>& Vertices, vector <Edge>& Edges): Graph(Vertices,Edges)
{
    
}

UndirectedGraph::UndirectedGraph(const UndirectedGraph& UG)
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
            
            for(unsigned int k = 0; k < EdgesVector.size(); k++)
            {
                if(EdgesVector[k].getStartingVertex().getID() == v.getID())
                {
                    EdgesVector.erase(EdgesVector.begin() + k);
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


void UndirectedGraph::display(Vertex &v)
{
    cout<<"The path(s) that contain vertex #"<<v.getID()<<" is..."<<endl;
    
    for(unsigned int i = 0; i < EdgesVector.size(); i++)
    {
        if(EdgesVector[i].getStartingVertex().getID() == v.getID())
        {
            cout<<EdgesVector[i].getStartingVertex().getValue()<<"->"<<EdgesVector[i].getEndingVertex().getValue();
            
            int a = i;
            int j=0;
            
            while(j < EdgesVector.size())
            {
                if(EdgesVector[a].getEndingVertex().getID() == EdgesVector[j].getStartingVertex().getID())
                {
                    cout<<"->"<<EdgesVector[j].getEndingVertex().getValue();
                    
                    if(EdgesVector[j].getEndingVertex().getID() == v.getID())
                    {
                        break;
                    }
                    a=j;
                    j=-1;
                }
                j++;
            }
            cout<<endl;
        }
    }
    cout<<endl<<endl;
}


void UndirectedGraph::display(Edge &e)
{
    cout<< "The path(s) that contain edge of weight "<<e.getWeight()<<" is..."<<endl;
    
    for(unsigned int i = 0; i < EdgesVector.size(); i++)
    {
        if(EdgesVector[i].getWeight() == e.getWeight())
        {
            cout<<EdgesVector[i].getStartingVertex().getValue()<<"->"<<EdgesVector[i].getEndingVertex().getValue();
            
            int a = i;
            int j = 0;
            
            while(j < EdgesVector.size())
            {
                if(EdgesVector[a].getEndingVertex().getID() == EdgesVector[j].getStartingVertex().getID())
                {
                    cout<<"->"<<EdgesVector[j].getEndingVertex().getValue();
                    
                    if(EdgesVector[j].getEndingVertex().getID() == e.getStartingVertex().getID())
                    {
                        break;
                    }
                    a=j;
                    j=-1;
                }
                j++;
            }
            cout<<endl;
        }
    }
}

void UndirectedGraph::display()
{
    cout<<endl;
    
    cout<<"In the form of 'Vertex#(ID)'..."<<endl;
    cout<<"The vertices of the graph are...";
    for(unsigned int i = 0; i < VertexVector.size(); i++)
    {
        cout<<VertexVector[i].getValue()<<"("<<VertexVector[i].getID()<<") ";
    }
    
    cout<<endl<<endl;
    
    cout<<"In the form of 'Weight(Starting Vertex,Ending Vertex)'..."<<endl;
    cout<<"The connections of the graph are..."<<endl;
    
    for(unsigned int i = 0; i < EdgesVector.size(); i++)
    {
        cout<< EdgesVector[i].getWeight()<<"("<<EdgesVector[i].getStartingVertex().getValue()<<","<<EdgesVector[i].getEndingVertex().getValue()<<")"<<endl;
    }
    
}

string UndirectedGraph::toString()
{
    return "";
}

    



bool UndirectedGraph::clean()
{
    cout<<endl<<endl;
    
    VertexVector.clear();
    EdgesVector.clear();
    return true;
}


UndirectedGraph &UndirectedGraph::operator+(UndirectedGraph&UG)
{
    UndirectedGraph NewUG;
    
    for(unsigned int i = 0; i < UG.VertexVector.size(); i++)
    {
        VertexVector.push_back(UG.VertexVector[i]);
    }
    
    for(unsigned int j = 0; j < UG.EdgesVector.size(); j++)
    {
        EdgesVector.push_back(UG.EdgesVector[j]);
    }
    
    NewUG.VertexVector = VertexVector;
    NewUG.EdgesVector = EdgesVector;
    
    return NewUG;
}







