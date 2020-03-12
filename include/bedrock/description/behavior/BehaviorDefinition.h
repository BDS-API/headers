#pragma once

#include "../../../unmapped/BehaviorData.h"
#include "../../actor/Actor.h"
#include "../../../json/Value.h"
#include "../../actor/behavior/BehaviorNode.h"
#include "../../../unmapped/BehaviorFactory.h"


class BehaviorDefinition {

public:
    ~BehaviorDefinition();
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
    virtual void load(Json::Value, BehaviorFactory const&);
    void getTreeDefinition()const;
    BehaviorDefinition();
    std::string getName()const;
};
