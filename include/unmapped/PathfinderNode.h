#pragma once



class PathfinderNode {

public:
    PathfinderNode(PathfinderNode const&);
    void inOpenSet();
    void equals(PathfinderNode *);
//  PathfinderNode(BlockPos const&, NodeType); //TODO: incomplete function definition
    PathfinderNode();
    void setCostMalus(float);
    void distanceTo(PathfinderNode *)const;
    void getCostMalus()const;
    void setMoveMalus(float);
    void distanceToSqr(PathfinderNode *)const;
    void getType()const;
    void hashCode();
};
