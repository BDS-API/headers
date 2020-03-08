#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"
#include "../../../unmapped/BehaviorTreeDefinitionPtr"


class CompositeDefinition : BehaviorDefinition {

public:
    CompositeDefinition::~CompositeDefinition()

    CompositeDefinition(void);
    void getCount()const;
    void get(unsigned long)const;
    void _compositeLoadChildrenBehaviors(Json::Value, std::vector<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>>, std::allocator<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>>>> &, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
