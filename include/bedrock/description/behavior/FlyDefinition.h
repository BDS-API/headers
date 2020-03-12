#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class FlyDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~FlyDefinition();
    FlyDefinition();
};
