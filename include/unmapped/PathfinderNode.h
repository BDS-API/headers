#pragma once

#include "../bedrock/util/BlockPos"


class PathfinderNode {

public:

    PathfinderNode(BlockPos const&, NodeType);
    PathfinderNode(PathfinderNode const&);
    void getType()const;
    void distanceTo(PathfinderNode*)const;
    void distanceToSqr(PathfinderNode*)const;
    void equals(PathfinderNode*);
    void hashCode();
    void inOpenSet();
    void getCostMalus()const;
    void setCostMalus(float);
    void setMoveMalus(float);
    PathfinderNode(void);
};
