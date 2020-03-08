#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../unmapped/BehaviorTreeDefinitionPtr"
#include "../../../json/Value"


class CompositeDefinition : BehaviorDefinition {

public:
    virtual CompositeDefinition::~CompositeDefinition()

    CompositeDefinition(void);
    void getCount()const;
    void get(unsigned long)const;
    void _compositeLoadChildrenBehaviors(Json::Value, std::vector<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>>, std::allocator<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>>>> &, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
