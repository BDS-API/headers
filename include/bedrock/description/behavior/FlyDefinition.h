#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FlyDefinition : BehaviorDefinition {

public:
    ~FlyDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    FlyDefinition();
};
