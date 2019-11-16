#pragma once

class WaitTicksDefinition : BehaviorDefinition {

    virtual void ~WaitTicksDefinition();
    virtual void ~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
