#pragma once

#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "../../../json/Value.h"
#include <vector>


class CompositeDefinition : BehaviorDefinition {

public:
    ~CompositeDefinition();
    CompositeDefinition();
    void get(unsigned long)const;
    void getCount()const;
    void _compositeLoadChildrenBehaviors(Json::Value, std::vector<std::unique_ptr<BehaviorDefinition>> &, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
