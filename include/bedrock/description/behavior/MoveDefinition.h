#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class MoveDefinition : BehaviorDefinition {

public:
    virtual MoveDefinition::~MoveDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveDefinition(void);
};
