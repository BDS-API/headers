#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class MoveToDefinition : BehaviorDefinition {

public:
    virtual MoveToDefinition::~MoveToDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveToDefinition(void);
};
