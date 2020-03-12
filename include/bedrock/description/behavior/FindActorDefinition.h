#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindActorDefinition : BehaviorDefinition {

public:
    ~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    FindActorDefinition();
};
