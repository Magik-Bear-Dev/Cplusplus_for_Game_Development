#pragma once // header guard
#include "ObjectHeaderFile.h" // header file
#include "iostream" // header file
using namespace std; // namespace

class Actor : public Object // derived class
{
public:
    virtual void BeginPlay() override; // function override

    void ActorFunction(); // function
};