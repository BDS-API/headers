#pragma once

#include "../Actor"
#include "../../../unmapped/BehaviorComponent"


class BehaviorNode {

public:
    virtual BehaviorNode::~BehaviorNode();
    virtual void initializeFromDefinition(Actor &);

    BehaviorNode(void);
    void getStatus(void)const;
    void getBehaviorTreeDefinition(void);
    void setComponent(BehaviorComponent *);
    void getBehaviorData(void);
};
