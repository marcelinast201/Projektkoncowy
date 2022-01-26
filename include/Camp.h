//
// Created by pc on 26.01.2022.
//

#ifndef PROJEKTKONCOWY_CAMP_H
#define PROJEKTKONCOWY_CAMP_H
#include <iostream>
using namespace std;
class Camp{
public:

    virtual ~Camp(){
        cout<<"The end of fights"<<endl;

    }
};
class Saved:public Camp{
public:
    ~Saved(){
        cout<<"The camp is saved"<<endl;
    }
};
class Destroyed:public Camp{
public:
    ~Destroyed(){
        cout<<"The camp is destroyed"<<endl;
    }
};
#endif //PROJEKTKONCOWY_CAMP_H
