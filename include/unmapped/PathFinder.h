#pragma once

#include "BreakBlocksComponent.h"
#include "PathfinderNode.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include <functional>
#include "Block.h"
#include "../bedrock/actor/Actor.h"
#include "NavigationComponent.h"


class PathFinder {

public:
    void _isBlockWater(int, int, int)const;
    PathFinder(BlockSource *, NavigationComponent const&);
    void _isBlockWater(BlockPos const&)const;
    ~PathFinder();
    void _classifyNode(Actor *, BlockPos const&, BlockPos const&);
    void _classifyDoorNode(Actor *, Block const&, BlockPos const&);
    bool isFree(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, bool);
    void _checkForDamagingBlock(Actor *, BlockPos const&, Block const*, int, BreakBlocksComponent const*);
//  void getNode(BlockPos const&, NodeType); //TODO: incomplete function definition
    void _getNeighbors(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, unsigned int);
    void _classifyNode(Actor *, BlockPos const&, Block const&, BlockPos const&, bool);
    void _getActorRadius(Actor const&)const;
    bool isFreeWaterNode(Actor *, BlockPos const&);
//  void _getPathfindingMalus(Actor *, NodeType, BlockPos const&); //TODO: incomplete function definition
    void _findNearestPathableNeighbor(BlockPos &, Actor *, BlockPos const&);
    void findPath(Actor *, float, float, float, float);
//  void _canJumpIntoNodeOfType(NodeType, Actor const&)const; //TODO: incomplete function definition
    void _belowBlockExtendsIntoAboveBlock(BlockSource &, BlockPos const&)const;
    void getNode(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, int);
//  void _checkBlockAndNeighborsProperty(Actor *, BlockPos const&, Block const*, BlockProperty, int, BreakBlocksComponent const*, std::function<bool (Block const&, BlockPos const&)>); //TODO: incomplete function definition
    void findPath(Actor *, Actor *, float);
    void findPath(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, float);
    void calculateMoveCost(PathfinderNode &, BlockPos const&, BlockSource &);
//  void _reconstructPath(PathfinderNode *, PathCompletionType, ActorUniqueID); //TODO: incomplete function definition
    void getWaterNode(Actor *, BlockPos const&);
    void _addNeighbor(PathfinderNode *, PathfinderNode *, unsigned int, unsigned long &);
    void findPath(Actor *, int, int, int, float);
};
