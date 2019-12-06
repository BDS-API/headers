#pragma once

class FindBlockDefinition : BehaviorDefinition {

public:
    virtual ~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void FindBlockDefinition(void);
};
