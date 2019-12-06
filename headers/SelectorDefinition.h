#pragma once

class SelectorDefinition : CompositeDefinition {

public:
    virtual ~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void SelectorDefinition(void);
};
