#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindActorDefinition : BehaviorDefinition {

public:
    virtual ~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FindActorDefinition();
};
