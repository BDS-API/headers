#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class FlyDefinition : BehaviorDefinition {

public:
    virtual ~FlyDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FlyDefinition();
};
