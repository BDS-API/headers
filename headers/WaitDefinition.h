#pragma once

class WaitDefinition : BehaviorDefinition {

    virtual ~WaitDefinition();
    virtual ~WaitDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
