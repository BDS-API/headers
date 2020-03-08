#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class FindBlockDefinition : BehaviorDefinition {

public:
    virtual FindBlockDefinition::~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FindBlockDefinition(void);
};
