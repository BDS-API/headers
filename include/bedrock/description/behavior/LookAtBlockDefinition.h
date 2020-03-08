#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class LookAtBlockDefinition : BehaviorDefinition {

public:
    LookAtBlockDefinition::~LookAtBlockDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtBlockDefinition(void);
};
