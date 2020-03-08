#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class MoveDefinition : BehaviorDefinition {

public:
    MoveDefinition::~MoveDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveDefinition(void);
};
