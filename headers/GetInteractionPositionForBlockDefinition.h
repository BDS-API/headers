#pragma once

class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

    virtual void ~GetInteractionPositionForBlockDefinition();
    virtual void ~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
