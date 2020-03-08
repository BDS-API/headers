#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class FindBlockDefinition : BehaviorDefinition {

public:
    FindBlockDefinition::~FindBlockDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    FindBlockDefinition(void);
};
