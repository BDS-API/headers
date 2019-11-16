#pragma once

class FindBlockDefinition : BehaviorDefinition {

    virtual void ~FindBlockDefinition();
    virtual void ~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
