#pragma once

class WaitTicksDefinition : BehaviorDefinition {

    virtual ~WaitTicksDefinition();
    virtual ~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
