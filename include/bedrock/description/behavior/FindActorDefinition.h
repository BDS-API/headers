#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class FindActorDefinition : BehaviorDefinition {

public:
    ~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    FindActorDefinition();
};
