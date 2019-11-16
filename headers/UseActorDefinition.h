#pragma once

class UseActorDefinition : BehaviorDefinition {

    virtual ~UseActorDefinition();
    virtual ~UseActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
