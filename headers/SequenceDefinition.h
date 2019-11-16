#pragma once

class SequenceDefinition : CompositeDefinition {

    virtual ~SequenceDefinition();
    virtual ~SequenceDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
