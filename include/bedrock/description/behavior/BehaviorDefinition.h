#pragma once

#include "../../../json/Value"
#include "../../actor/Actor"
#include "../../../unmapped/BehaviorFactory"
#include "../../actor/behavior/BehaviorNode"
#include "../../../unmapped/BehaviorData"


class BehaviorDefinition {

public:
    BehaviorDefinition::~BehaviorDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;

    BehaviorDefinition(void);
    void getTreeDefinition()const;
};
