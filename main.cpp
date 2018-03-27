//
//  main.cpp
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#include <iostream>
#include <vector>
#include "vertex.h"
#include "edge.h"
#include "graph.h"
#include "DirectedGraph.h"
using namespace std;

int main()
{
    vector <Vertex> Vertices;
    vector <Edge> Edges;
    
    
    Vertex V1(1111, 1);
    Vertex V2(2222, 2);
    Vertex V3(3333, 3);
    Vertex V4(4444, 4);
    Vertex V5(5555, 5);
    Vertex V6(6666, 6);
    Vertex V7(7777, 7);
    Vertex V8(8888, 8);
    
    Edge E1(100, V2, V4);
    Edge E2(200, V4, V3);
    Edge E3(300, V3, V1);
    Edge E4(400, V1, V2);
    Edge E5(500, V2, V5);
    Edge E6(600, V5, V6);
    Edge E7(700, V6, V3);
    Edge E8(800, V7, V8);
    
    DirectedGraph dg(Vertices, Edges);
    DirectedGraph dg2(Vertices, Edges);
    DirectedGraph dg3(Vertices, Edges);
    
    dg.addVertex(V1);
    dg.addVertex(V2);
    dg.addVertex(V3);
    dg.addVertex(V4);
    dg.addVertex(V5);
    dg.addVertex(V6);
    
    dg2.addVertex(V1);
    dg2.addVertex(V2);
    dg2.addVertex(V3);
    dg2.addVertex(V4);
    dg2.addVertex(V5);
    dg2.addVertex(V6);
    dg2.addVertex(V7);
    dg2.addVertex(V8);
    
    dg.addEdge(E1);
    dg.addEdge(E2);
    dg.addEdge(E3);
    dg.addEdge(E4);
    dg.addEdge(E5);
    dg.addEdge(E6);
    dg.addEdge(E7);
    
    dg2.addEdge(E1);
    dg2.addEdge(E2);
    dg2.addEdge(E3);
    dg2.addEdge(E4);
    dg2.addEdge(E5);
    dg2.addEdge(E6);
    dg2.addEdge(E7);
    dg2.addEdge(E8);
    
    dg.searchVertex(V1);
    dg.searchEdge(E1);
    
    dg.display(V2);
    dg.display(E1);
    
    dg.display();
    
    cout<<endl;
    cout<<dg.toString();
    
    cout<<endl<<endl;
    
    cout<< (dg == dg2)<<endl;
    
    
    if(dg>dg2){
        cout<<"dg is heavier"<<endl;
    }
    else{
        cout<<"dg is lighter"<<endl;
    }
    
    cout<<dg2;
    cout<<endl;
    
    cout<<"Adding two graphs together..."<<endl;
    dg3 = (dg + dg2);
    
    dg3.display();
   
    cout<<endl;
    cout<<"Adding graph by 1 twice..."<<endl;
    
    ++dg;
    
    dg++;
    
    dg.display();
    
    cout<<endl;
    cout<<"Assigning dg2 to dg..."<<endl;
    dg = dg2;
    
    dg.display();
    
    cout<<endl;
    cout<<"Removing all the vertices and edges from graph..."<<endl;
    dg.clean();
    
    cout<<dg.searchEdge(E4);
    cout<<dg.searchVertex(V5);
    

    cout<<endl;
    return 0;
};
