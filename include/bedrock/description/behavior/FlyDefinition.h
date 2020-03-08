#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class FlyDefinition : BehaviorDefinition {

public:
    virtual FlyDefinition::~FlyDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FlyDefinition(void);
};
