#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class LookAtActorDefinition : BehaviorDefinition {

public:
    ~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    LookAtActorDefinition();
};
