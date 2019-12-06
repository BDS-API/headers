#pragma once

class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    virtual ~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void GetInteractionPositionForBlockDefinition(void);
};
