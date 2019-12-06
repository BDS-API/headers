#pragma once

class ActivateToolDefinition : BehaviorDefinition {

public:
    virtual ~ActivateToolDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void ActivateToolDefinition(void);
};
