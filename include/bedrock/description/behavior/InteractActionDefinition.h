#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class InteractActionDefinition : BehaviorDefinition {

public:
    virtual InteractActionDefinition::~InteractActionDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    InteractActionDefinition(void);
};
