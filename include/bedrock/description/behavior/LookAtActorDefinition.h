#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtActorDefinition : BehaviorDefinition {

public:
    virtual ~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtActorDefinition();
};
