//
//  vertex.h
//  Problem 1
//
//  Created by Osama AlKhatatbeh on 3/18/18.
//  Copyright © 2018 Osama AlKhatatbeh. All rights reserved.
//

#ifndef vertex_h
#define vertex_h

#include <iostream>

class Vertex
{
    
public:
    Vertex();
    Vertex(int,int);
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
