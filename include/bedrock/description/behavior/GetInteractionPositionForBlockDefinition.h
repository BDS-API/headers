#pragma once

class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    virtual GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    GetInteractionPositionForBlockDefinition(void);
};
