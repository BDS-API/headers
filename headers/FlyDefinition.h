#pragma once

class FlyDefinition : BehaviorDefinition {

    virtual void FlyDefinition::~FlyDefinition();
    virtual void FlyDefinition::~FlyDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
