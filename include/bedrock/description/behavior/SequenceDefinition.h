#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class SequenceDefinition : CompositeDefinition {

public:
    virtual SequenceDefinition::~SequenceDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    SequenceDefinition(void);
};
