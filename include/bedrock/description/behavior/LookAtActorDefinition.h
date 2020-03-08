#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class LookAtActorDefinition : BehaviorDefinition {

public:
    LookAtActorDefinition::~LookAtActorDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtActorDefinition(void);
};
