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
#include "UndirectedGraph.h"
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
    
    Edge E1(100, V2, V4);
    Edge E2(200, V4, V3);
    Edge E3(300, V3, V1);
    Edge E4(400, V1, V2);
    Edge E5(500, V2, V5);
    Edge E6(600, V5, V6);
    Edge E7(700, V6,V3);

    UndirectedGraph ug(Vertices, Edges);
    
    ug.addVertex(V1);
    ug.addVertex(V2);
    ug.addVertex(V3);
    ug.addVertex(V4);
    ug.addVertex(V5);
    ug.addVertex(V6);
    
    ug.addEdge(E1);
    ug.addEdge(E2);
    ug.addEdge(E3);
    ug.addEdge(E4);
    ug.addEdge(E5);
    ug.addEdge(E6);
    ug.addEdge(E7);
    
    ug.searchVertex(V1);
    ug.searchEdge(E1);
    
    ug.display(V2);
    ug.display(E1);
    
    
    ug.clean();
    
    cout<<ug.searchEdge(E4);
    cout<<ug.searchVertex(V5);
    
    cout<<endl;
    return 0;
};
