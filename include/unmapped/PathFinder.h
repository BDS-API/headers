#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class PathFinder {

public:

    PathFinder(BlockSource *, NavigationComponent const&);
    void findPath(Actor *, Actor *, float);
    void findPath(Actor *, float, float, float, float);
    void findPath(Actor *, int, int, int, float);
    void _findNearestPathableNeighbor(BlockPos &, Actor *, BlockPos const&);
    void getNode(BlockPos const&, NodeType);
    void findPath(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, float);
    void _isBlockWater(BlockPos const&)const;
    void _classifyNode(Actor *, BlockPos const&, BlockPos const&);
    void _classifyDoorNode(Actor *, Block const&, BlockPos const&);
    void _reconstructPath(PathfinderNode *, PathCompletionType, ActorUniqueID);
    void _getNeighbors(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, unsigned int);
    bool isFree(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, bool);
    void calculateMoveCost(PathfinderNode &, BlockPos const&, BlockSource &);
    void getWaterNode(Actor *, BlockPos const&);
    bool isFreeWaterNode(Actor *, BlockPos const&);
    void getNode(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, int);
    void _checkForDamagingBlock(Actor *, BlockPos const&, Block const*, int, BreakBlocksComponent const*);
    void _getActorRadius(Actor const&)const;
    void _getPathfindingMalus(Actor *, NodeType, BlockPos const&);
    void _canJumpIntoNodeOfType(NodeType, Actor const&)const;
    void _addNeighbor(PathfinderNode *, PathfinderNode *, unsigned int, unsigned long &);
    void _classifyNode(Actor *, BlockPos const&, Block const&, BlockPos const&, bool);
    void _checkBlockAndNeighborsProperty(Actor *, BlockPos const&, Block const*, BlockProperty, int, BreakBlocksComponent const*, std::function<bool ()(Block const&, BlockPos const&)>);
    void _belowBlockExtendsIntoAboveBlock(BlockSource &, BlockPos const&)const;
    void _isBlockWater(int, int, int)const;
};
