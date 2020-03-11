#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/BehaviorData.h"
#include "../../actor/behavior/BehaviorNode.h"
#include "../../../json/Value.h"
#include <string>


class BehaviorDefinition {

public:
    virtual ~BehaviorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;

    BehaviorDefinition();
    std::string getName()const;
    void getTreeDefinition()const;
};
