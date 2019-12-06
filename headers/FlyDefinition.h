#pragma once

class FlyDefinition : BehaviorDefinition {

public:
    virtual ~FlyDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void FlyDefinition(void);
};
