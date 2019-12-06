#pragma once

class WaitDefinition : BehaviorDefinition {

public:
    virtual ~WaitDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void WaitDefinition(void);
};
