//
//  vertex.h
//  Problem 1
//
//  Name: Osama AlKhatatbeh , ID:40023753
//  Name: Samer El-Dehaibi , ID:40057682
//

#ifndef vertex_h
#define vertex_h

#include <iostream>
#include <vector>

class Vertex
{
    
public:
    Vertex();                //default constructor
    Vertex(int,int);        //constructor
    Vertex(const Vertex&);        //copy constructor
    void setID(int);
    void setValue(int);
    int getID();
    int getValue();
    ~Vertex();
    
private:
    int ID;
    int VALUE;
    
};
#endif /* vertex_h */
