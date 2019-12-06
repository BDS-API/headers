#pragma once

class LookAtBlockDefinition : BehaviorDefinition {

public:
    virtual ~LookAtBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void LookAtBlockDefinition(void);
};
