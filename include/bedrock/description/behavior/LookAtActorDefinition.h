#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class LookAtActorDefinition : BehaviorDefinition {

public:
    virtual LookAtActorDefinition::~LookAtActorDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtActorDefinition(void);
};
