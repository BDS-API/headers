#pragma once

class InteractActionDefinition : BehaviorDefinition {

public:
    virtual ~InteractActionDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void InteractActionDefinition(void);
};
