#pragma once

#include "../Actor.h"
#include "../../../unmapped/BehaviorComponent.h"


class BehaviorNode {

public:
    ~BehaviorNode();
    virtual void initializeFromDefinition(Actor &);
    void getBehaviorData();
    BehaviorNode();
    void getStatus()const;
    void getBehaviorTreeDefinition();
    void setComponent(BehaviorComponent *);
};
