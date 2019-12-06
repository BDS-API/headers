#pragma once

class PlaceBlockNode : BehaviorNode {

public:
    virtual ~PlaceBlockNode();
    virtual void tick(Actor &);

    void PlaceBlockNode(void);
};
