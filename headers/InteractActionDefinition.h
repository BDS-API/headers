#pragma once

class InteractActionDefinition : BehaviorDefinition {

    virtual void InteractActionDefinition::~InteractActionDefinition();
    virtual void InteractActionDefinition::~InteractActionDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
