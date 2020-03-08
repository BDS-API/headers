#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class LookAtActorDefinition : BehaviorDefinition {

public:
    virtual LookAtActorDefinition::~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtActorDefinition(void);
};
