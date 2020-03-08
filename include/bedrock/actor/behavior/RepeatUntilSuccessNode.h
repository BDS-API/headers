#pragma once

#include "../Actor"


class RepeatUntilSuccessNode : BehaviorNode {

public:
    virtual RepeatUntilSuccessNode::~RepeatUntilSuccessNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    RepeatUntilSuccessNode(void);
};
