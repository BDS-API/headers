#pragma once

#include <string>
#include "BehaviorNode.h"


class GetInteractionPositionForBlockNode : BehaviorNode {

public:
    ~GetInteractionPositionForBlockNode(); // _ZN34GetInteractionPositionForBlockNodeD2Ev
    virtual void tick(Actor &); // _ZN34GetInteractionPositionForBlockNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN34GetInteractionPositionForBlockNode24initializeFromDefinitionER5Actor
    GetInteractionPositionForBlockNode(); // _ZN34GetInteractionPositionForBlockNodeC2Ev
    void parseFacingNameFromString(std::string); // _ZN34GetInteractionPositionForBlockNode25parseFacingNameFromStringENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
