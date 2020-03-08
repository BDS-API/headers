#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class MoveDefinition : BehaviorDefinition {

public:
    virtual MoveDefinition::~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveDefinition(void);
};
