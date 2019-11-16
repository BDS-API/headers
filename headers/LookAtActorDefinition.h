#pragma once

class LookAtActorDefinition : BehaviorDefinition {

    virtual ~LookAtActorDefinition();
    virtual ~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
