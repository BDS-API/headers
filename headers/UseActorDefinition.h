#pragma once

class UseActorDefinition : BehaviorDefinition {

    virtual void ~UseActorDefinition();
    virtual void ~UseActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
