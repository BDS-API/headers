#pragma once

#include "BehaviorNode.h"
#include <string>


class MoveNode : public BehaviorNode {

public:
    virtual ~MoveNode(); // _ZN8MoveNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN8MoveNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN8MoveNode24initializeFromDefinitionER5Actor
    MoveNode(); // _ZN8MoveNodeC2Ev
    void convertDirectionStringToKeyPress(std::string); // _ZN8MoveNode32convertDirectionStringToKeyPressENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
