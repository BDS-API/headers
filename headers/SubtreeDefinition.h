#pragma once

class SubtreeDefinition : BehaviorDefinition {

public:
    virtual ~SubtreeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void SubtreeDefinition(void);
};
