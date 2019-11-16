#pragma once

class MoveToDefinition : BehaviorDefinition {

    virtual void ~MoveToDefinition();
    virtual void ~MoveToDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
