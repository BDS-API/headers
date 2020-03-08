#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class SubtreeDefinition : BehaviorDefinition {

public:
    virtual SubtreeDefinition::~SubtreeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    SubtreeDefinition(void);
};
