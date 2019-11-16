#pragma once

class InverterDefinition : DecoratorDefinition {

    virtual ~InverterDefinition();
    virtual ~InverterDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
