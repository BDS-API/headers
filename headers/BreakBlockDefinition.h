#pragma once

class BreakBlockDefinition : BehaviorDefinition {

public:
    virtual ~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void BreakBlockDefinition(void);
};
