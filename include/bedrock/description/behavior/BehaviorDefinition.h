#pragma once

#include <string>
#include "../../../json/Value.h"


class BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
    ~BehaviorDefinition();
    void getTreeDefinition()const;
    std::string getName()const;
    BehaviorDefinition();
};
