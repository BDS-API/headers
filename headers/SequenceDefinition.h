#pragma once

class SequenceDefinition : CompositeDefinition {

public:
    virtual ~SequenceDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void SequenceDefinition(void);
};
