#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class AttackDefinition : BehaviorDefinition {

public:
    ~AttackDefinition(); // _ZN16AttackDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN16AttackDefinition4loadEN4Json5ValueERK15BehaviorFactory
    AttackDefinition(); // _ZN16AttackDefinitionC2Ev
};
