#pragma once

class MoveDefinition : BehaviorDefinition {

    virtual ~MoveDefinition();
    virtual ~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
