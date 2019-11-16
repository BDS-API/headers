#pragma once

class ConsumeItemDefinition : BehaviorDefinition {

    virtual void ~ConsumeItemDefinition();
    virtual void ~ConsumeItemDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
