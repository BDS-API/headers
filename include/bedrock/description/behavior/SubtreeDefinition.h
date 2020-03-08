#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class SubtreeDefinition : BehaviorDefinition {

public:
    virtual SubtreeDefinition::~SubtreeDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    SubtreeDefinition(void);
};
