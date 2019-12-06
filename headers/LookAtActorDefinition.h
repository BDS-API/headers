#pragma once

class LookAtActorDefinition : BehaviorDefinition {

public:
    virtual ~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void LookAtActorDefinition(void);
};
