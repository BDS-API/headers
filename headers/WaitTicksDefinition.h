#pragma once

class WaitTicksDefinition : BehaviorDefinition {

public:
    virtual ~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void WaitTicksDefinition(void);
};
