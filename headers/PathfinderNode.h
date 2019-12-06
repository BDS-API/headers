#pragma once

class PathfinderNode {

public:

    void PathfinderNode(BlockPos const&, NodeType);
    void PathfinderNode(PathfinderNode const&);
    void getType(void)const;
    void distanceTo(PathfinderNode*)const;
    void distanceToSqr(PathfinderNode*)const;
    void equals(PathfinderNode*);
    void hashCode(void);
    void inOpenSet(void);
    void getCostMalus(void)const;
    void setCostMalus(float);
    void setMoveMalus(float);
    void PathfinderNode(void);
};
