#pragma once

class FindActorDefinition : BehaviorDefinition {

public:
    virtual ~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void FindActorDefinition(void);
};
