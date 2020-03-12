#pragma once

#include "../bedrock/util/BlockPos.h"


class PathfinderNode {

public:
    PathfinderNode(PathfinderNode const&);
    void equals(PathfinderNode *);
    void hashCode();
    void setMoveMalus(float);
    PathfinderNode();
    void distanceToSqr(PathfinderNode *)const;
    void inOpenSet();
    void distanceTo(PathfinderNode *)const;
    void getCostMalus()const;
//  PathfinderNode(BlockPos const&, NodeType); //TODO: incomplete function definition
    void setCostMalus(float);
    void getType()const;
};
