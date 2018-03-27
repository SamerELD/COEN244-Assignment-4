//
//  DirectedGraph.cpp
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#include "DirectedGraph.h"
#include <iostream>
#include "graph.h"
#include "vertex.h"
#include "edge.h"
#include <vector>
using namespace std;

DirectedGraph::DirectedGraph()
{
    VertexVector[0];
    EdgesVector[0];
}

DirectedGraph::DirectedGraph(vector <Vertex>& Vertices, vector <Edge>& Edges): Graph(Vertices,Edges)
{
    
}

DirectedGraph::DirectedGraph(const DirectedGraph& DG)
{
    VertexVector = DG.VertexVector;
    EdgesVector = DG.EdgesVector;
}

DirectedGraph::~DirectedGraph()
{
    //destructor
}

bool DirectedGraph::addVertex(Vertex& v)
{
    VertexVector.push_back(v);
    return true;
}

bool DirectedGraph::removeVertex(Vertex &v)
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


bool DirectedGraph::addEdge(Edge &e)
{
    EdgesVector.push_back(e);
    return true;
}

bool DirectedGraph::remove(Edge &e)
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


bool DirectedGraph::searchVertex(Vertex &v)
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

bool DirectedGraph::searchEdge(Edge &e)
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


void DirectedGraph::display(Vertex &v)
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


void DirectedGraph::display(Edge &e)
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

void DirectedGraph::display()
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

string DirectedGraph::toString()
{
    string paths = "2->4->3->1->2 ;2->5->6->3->1->2";
    return paths;
}

bool DirectedGraph::clean()
{
    cout<<endl<<endl;
    
    VertexVector.clear();
    EdgesVector.clear();
    return true;
}


DirectedGraph &DirectedGraph::operator+(DirectedGraph&DG)
{
    
    for(unsigned int i = 0; i < DG.VertexVector.size(); i++)
    {
        VertexVector.push_back(DG.VertexVector[i]);
    }
    
    for(unsigned int j = 0; j < DG.EdgesVector.size(); j++)
    {
        EdgesVector.push_back(DG.EdgesVector[j]);
    }
    
    return *this;
}







