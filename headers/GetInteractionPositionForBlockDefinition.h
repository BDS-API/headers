#pragma once

class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

    virtual ~GetInteractionPositionForBlockDefinition();
    virtual ~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
