#pragma once

#include "../../../unmapped/BehaviorComponent"
#include "../Actor"


class BehaviorNode {

public:
    BehaviorNode::~BehaviorNode()
    virtual void initializeFromDefinition(Actor &);

    BehaviorNode(void);
    void getStatus()const;
    void getBehaviorTreeDefinition();
    void setComponent(BehaviorComponent *);
    void getBehaviorData();
};
