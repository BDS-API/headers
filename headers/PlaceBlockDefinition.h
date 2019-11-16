#pragma once

class PlaceBlockDefinition : BehaviorDefinition {

    virtual ~PlaceBlockDefinition();
    virtual ~PlaceBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
