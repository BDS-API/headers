#pragma once

class SequenceDefinition : CompositeDefinition {

    virtual void SequenceDefinition::~SequenceDefinition();
    virtual void SequenceDefinition::~SequenceDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
