#pragma once // header guard
#include "ActorForHeaderFile.h" // header file

class Pawn : public Actor // derived class
{
public:
    virtual void BeginPlay() override; // function override

    void PawnFunction(); // function
};
