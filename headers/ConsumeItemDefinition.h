#pragma once

class ConsumeItemDefinition : BehaviorDefinition {

    virtual ~ConsumeItemDefinition();
    virtual ~ConsumeItemDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
