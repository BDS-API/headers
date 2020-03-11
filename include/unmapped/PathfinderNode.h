#pragma once

#include "./PathfinderNode.h"
#include "../bedrock/util/BlockPos.h"


class PathfinderNode {

public:

//  PathfinderNode(BlockPos const&, NodeType); //TODO: incomplete function definition
    PathfinderNode(PathfinderNode const&);
    void getType()const;
    void distanceTo(PathfinderNode *)const;
    void distanceToSqr(PathfinderNode *)const;
    void equals(PathfinderNode *);
    void hashCode();
    void inOpenSet();
    void getCostMalus()const;
    void setCostMalus(float);
    void setMoveMalus(float);
    PathfinderNode();
};
