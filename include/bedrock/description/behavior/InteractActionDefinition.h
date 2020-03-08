#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class InteractActionDefinition : BehaviorDefinition {

public:
    virtual InteractActionDefinition::~InteractActionDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    InteractActionDefinition(void);
};
