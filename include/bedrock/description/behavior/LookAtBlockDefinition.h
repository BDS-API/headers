#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class LookAtBlockDefinition : BehaviorDefinition {

public:
    virtual LookAtBlockDefinition::~LookAtBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtBlockDefinition(void);
};
