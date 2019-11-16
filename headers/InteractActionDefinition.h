#pragma once

class InteractActionDefinition : BehaviorDefinition {

    virtual ~InteractActionDefinition();
    virtual ~InteractActionDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
