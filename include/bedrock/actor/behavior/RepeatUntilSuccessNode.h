#pragma once

#include "../Actor"


class RepeatUntilSuccessNode : BehaviorNode {

public:
    RepeatUntilSuccessNode::~RepeatUntilSuccessNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    RepeatUntilSuccessNode(void);
};
