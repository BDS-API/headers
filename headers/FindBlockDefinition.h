#pragma once

class FindBlockDefinition : BehaviorDefinition {

    virtual ~FindBlockDefinition();
    virtual ~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
