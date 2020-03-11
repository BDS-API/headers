#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include <memory>
#include "../../../json/Value.h"
#include <vector>
#include "./BehaviorDefinition.h"


class CompositeDefinition : BehaviorDefinition {

public:
    virtual ~CompositeDefinition();

    CompositeDefinition();
    void getCount()const;
    void get(unsigned long)const;
    void _compositeLoadChildrenBehaviors(Json::Value, std::vector<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>>, std::allocator<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>>>> &, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
