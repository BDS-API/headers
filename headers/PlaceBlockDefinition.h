#pragma once

class PlaceBlockDefinition : BehaviorDefinition {

    virtual void PlaceBlockDefinition::~PlaceBlockDefinition();
    virtual void PlaceBlockDefinition::~PlaceBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
