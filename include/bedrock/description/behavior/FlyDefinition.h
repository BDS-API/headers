#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class FlyDefinition : BehaviorDefinition {

public:
    virtual FlyDefinition::~FlyDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    FlyDefinition(void);
};
