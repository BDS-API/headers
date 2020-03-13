#pragma once



class PathfinderNode {

public:
//  PathfinderNode(BlockPos const&, NodeType); //TODO: incomplete function definition // _ZN14PathfinderNodeC2ERK8BlockPos8NodeType
    PathfinderNode(PathfinderNode const&); // _ZN14PathfinderNodeC2ERKS_
    void getType()const; // _ZNK14PathfinderNode7getTypeEv
    void distanceTo(PathfinderNode *)const; // _ZNK14PathfinderNode10distanceToEPS_
    void distanceToSqr(PathfinderNode *)const; // _ZNK14PathfinderNode13distanceToSqrEPS_
    void equals(PathfinderNode *); // _ZN14PathfinderNode6equalsEPS_
    void hashCode(); // _ZN14PathfinderNode8hashCodeEv
    void inOpenSet(); // _ZN14PathfinderNode9inOpenSetEv
    void getCostMalus()const; // _ZNK14PathfinderNode12getCostMalusEv
    void setCostMalus(float); // _ZN14PathfinderNode12setCostMalusEf
    void setMoveMalus(float); // _ZN14PathfinderNode12setMoveMalusEf
    PathfinderNode(); // _ZN14PathfinderNodeC2Ev
};
