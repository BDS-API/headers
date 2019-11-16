#pragma once

class WaitDefinition : BehaviorDefinition {

    virtual void ~WaitDefinition();
    virtual void ~WaitDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
