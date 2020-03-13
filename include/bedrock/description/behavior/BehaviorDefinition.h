#pragma once

#include "../../../json/Value.h"
#include <string>


class BehaviorDefinition {

public:
    ~BehaviorDefinition(); // _ZN18BehaviorDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18BehaviorDefinition4loadEN4Json5ValueERK15BehaviorFactory
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const; // _ZNK18BehaviorDefinition10createNodeER5ActorRK15BehaviorFactoryP12BehaviorNodeP12BehaviorData
    BehaviorDefinition(); // _ZN18BehaviorDefinitionC2Ev
    std::string getName()const; // _ZNK18BehaviorDefinition7getNameB5cxx11Ev
    void getTreeDefinition()const; // _ZNK18BehaviorDefinition17getTreeDefinitionEv
};
