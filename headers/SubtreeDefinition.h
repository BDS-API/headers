#pragma once

class SubtreeDefinition : BehaviorDefinition {

    virtual ~SubtreeDefinition();
    virtual ~SubtreeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
