#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include <vector>
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"


class CompositeDefinition : BehaviorDefinition {

public:
    ~CompositeDefinition(); // _ZN19CompositeDefinitionD2Ev
    CompositeDefinition(); // _ZN19CompositeDefinitionC2Ev
    void getCount()const; // _ZNK19CompositeDefinition8getCountEv
    void get(unsigned long)const; // _ZNK19CompositeDefinition3getEm
    void _compositeLoadChildrenBehaviors(Json::Value, std::vector<std::unique_ptr<BehaviorDefinition>> &, BehaviorFactory const&, BehaviorTreeDefinitionPtr); // _ZN19CompositeDefinition31_compositeLoadChildrenBehaviorsEN4Json5ValueERSt6vectorISt10unique_ptrI18BehaviorDefinitionSt14default_deleteIS4_EESaIS7_EERK15BehaviorFactory25BehaviorTreeDefinitionPtr
};
