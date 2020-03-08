#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class FindBlockDefinition : BehaviorDefinition {

public:
    virtual FindBlockDefinition::~FindBlockDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    FindBlockDefinition(void);
};
