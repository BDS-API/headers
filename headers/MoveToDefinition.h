#pragma once

class MoveToDefinition : BehaviorDefinition {

    virtual ~MoveToDefinition();
    virtual ~MoveToDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
