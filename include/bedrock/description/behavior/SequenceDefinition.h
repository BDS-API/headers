#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class SequenceDefinition : CompositeDefinition {

public:
    virtual SequenceDefinition::~SequenceDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    SequenceDefinition(void);
};
