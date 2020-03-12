#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <functional>


class PathFinder {

public:
    void _findNearestPathableNeighbor(BlockPos &, Actor *, BlockPos const&);
    void _classifyNode(Actor *, BlockPos const&, Block const&, BlockPos const&, bool);
    void _checkForDamagingBlock(Actor *, BlockPos const&, Block const*, int, BreakBlocksComponent const*);
//  void _checkBlockAndNeighborsProperty(Actor *, BlockPos const&, Block const*, BlockProperty, int, BreakBlocksComponent const*, std::function<bool (Block const&, BlockPos const&)>); //TODO: incomplete function definition
    void _getActorRadius(Actor const&)const;
    void _belowBlockExtendsIntoAboveBlock(BlockSource &, BlockPos const&)const;
    void calculateMoveCost(PathfinderNode &, BlockPos const&, BlockSource &);
    void _getNeighbors(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, unsigned int);
//  void _getPathfindingMalus(Actor *, NodeType, BlockPos const&); //TODO: incomplete function definition
    void _classifyNode(Actor *, BlockPos const&, BlockPos const&);
//  void _reconstructPath(PathfinderNode *, PathCompletionType, ActorUniqueID); //TODO: incomplete function definition
    void findPath(Actor *, Actor *, float);
    void _classifyDoorNode(Actor *, Block const&, BlockPos const&);
    PathFinder(BlockSource *, NavigationComponent const&);
    void findPath(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, float);
    bool isFree(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, bool);
    void getNode(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, int);
//  void getNode(BlockPos const&, NodeType); //TODO: incomplete function definition
    void _addNeighbor(PathfinderNode *, PathfinderNode *, unsigned int, unsigned long &);
//  void _canJumpIntoNodeOfType(NodeType, Actor const&)const; //TODO: incomplete function definition
    void getWaterNode(Actor *, BlockPos const&);
    void findPath(Actor *, float, float, float, float);
    void _isBlockWater(int, int, int)const;
    bool isFreeWaterNode(Actor *, BlockPos const&);
    void _isBlockWater(BlockPos const&)const;
    ~PathFinder();
    void findPath(Actor *, int, int, int, float);
};
