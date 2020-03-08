#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/BehaviorFactory"
#include "../../../unmapped/BehaviorData"
#include "../../actor/behavior/BehaviorNode"
#include "../../../json/Value"


class BehaviorDefinition {

public:
    virtual BehaviorDefinition::~BehaviorDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;

    BehaviorDefinition(void);
    void getTreeDefinition()const;
};
