#pragma once

class BehaviorDefinition {

    virtual ~BehaviorDefinition();
    virtual ~BehaviorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
