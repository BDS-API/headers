#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtActorDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~LookAtActorDefinition();
    LookAtActorDefinition();
};
