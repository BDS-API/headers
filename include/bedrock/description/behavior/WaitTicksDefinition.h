#pragma once

class WaitTicksDefinition : BehaviorDefinition {

public:
    virtual WaitTicksDefinition::~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitTicksDefinition(void);
};
