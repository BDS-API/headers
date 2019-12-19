#pragma once

class FindBlockDefinition : BehaviorDefinition {

public:
    virtual FindBlockDefinition::~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FindBlockDefinition(void);
};
