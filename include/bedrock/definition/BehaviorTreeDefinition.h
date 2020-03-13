#pragma once

#include <string>


class BehaviorTreeDefinition {

public:
    ~BehaviorTreeDefinition(); // _ZN22BehaviorTreeDefinitionD2Ev
    BehaviorTreeDefinition(std::string const&); // _ZN22BehaviorTreeDefinitionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName()const; // _ZNK22BehaviorTreeDefinition7getNameB5cxx11Ev
    void getRoot()const; // _ZNK22BehaviorTreeDefinition7getRootEv
    std::string getStringInput()const; // _ZNK22BehaviorTreeDefinition14getStringInputB5cxx11Ev
};
