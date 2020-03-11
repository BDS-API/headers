#pragma once

#include "../../../unmapped/BehaviorComponent.h"
#include "../Actor.h"


class BehaviorNode {

public:
    virtual ~BehaviorNode();
    virtual void initializeFromDefinition(Actor &);

    BehaviorNode();
    void getStatus()const;
    void getBehaviorTreeDefinition();
    void setComponent(BehaviorComponent *);
    void getBehaviorData();
};
