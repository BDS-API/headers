#pragma once

#include "BehaviorDefinition.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "../../../unmapped/BehaviorFactory.h"


class CompositeDefinition : BehaviorDefinition {

public:
    ~CompositeDefinition();
    CompositeDefinition();
    void _compositeLoadChildrenBehaviors(Json::Value, std::vector<std::unique_ptr<BehaviorDefinition>> &, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
    void getCount()const;
    void get(unsigned long)const;
};
