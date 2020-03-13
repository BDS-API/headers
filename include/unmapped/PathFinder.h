#pragma once

#include <functional>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class PathFinder {

public:
    PathFinder(BlockSource *, NavigationComponent const&); // _ZN10PathFinderC2EP11BlockSourceRK19NavigationComponent
    ~PathFinder(); // _ZN10PathFinderD2Ev
    void findPath(Actor *, Actor *, float); // _ZN10PathFinder8findPathEP5ActorS1_f
    void findPath(Actor *, float, float, float, float); // _ZN10PathFinder8findPathEP5Actorffff
    void findPath(Actor *, int, int, int, float); // _ZN10PathFinder8findPathEP5Actoriiif
    void _findNearestPathableNeighbor(BlockPos &, Actor *, BlockPos const&); // _ZN10PathFinder28_findNearestPathableNeighborER8BlockPosP5ActorRKS0_
//  void getNode(BlockPos const&, NodeType); //TODO: incomplete function definition // _ZN10PathFinder7getNodeERK8BlockPos8NodeType
    void findPath(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, float); // _ZN10PathFinder8findPathEP5ActorP14PathfinderNodeS3_S3_f
    void _isBlockWater(BlockPos const&)const; // _ZNK10PathFinder13_isBlockWaterERK8BlockPos
    void _classifyNode(Actor *, BlockPos const&, BlockPos const&); // _ZN10PathFinder13_classifyNodeEP5ActorRK8BlockPosS4_
    void _classifyDoorNode(Actor *, Block const&, BlockPos const&); // _ZN10PathFinder17_classifyDoorNodeEP5ActorRK5BlockRK8BlockPos
//  void _reconstructPath(PathfinderNode *, PathCompletionType, ActorUniqueID); //TODO: incomplete function definition // _ZN10PathFinder16_reconstructPathEP14PathfinderNode18PathCompletionType13ActorUniqueID
    void _getNeighbors(Actor *, PathfinderNode *, PathfinderNode *, PathfinderNode *, unsigned int); // _ZN10PathFinder13_getNeighborsEP5ActorP14PathfinderNodeS3_S3_j
    bool isFree(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, bool); // _ZN10PathFinder6isFreeEP5ActorRK8BlockPosS4_P14PathfinderNodeb
    void calculateMoveCost(PathfinderNode &, BlockPos const&, BlockSource &); // _ZN10PathFinder17calculateMoveCostER14PathfinderNodeRK8BlockPosR11BlockSource
    void getWaterNode(Actor *, BlockPos const&); // _ZN10PathFinder12getWaterNodeEP5ActorRK8BlockPos
    bool isFreeWaterNode(Actor *, BlockPos const&); // _ZN10PathFinder15isFreeWaterNodeEP5ActorRK8BlockPos
    void getNode(Actor *, BlockPos const&, BlockPos const&, PathfinderNode *, int); // _ZN10PathFinder7getNodeEP5ActorRK8BlockPosS4_P14PathfinderNodei
    void _checkForDamagingBlock(Actor *, BlockPos const&, Block const*, int, BreakBlocksComponent const*); // _ZN10PathFinder22_checkForDamagingBlockEP5ActorRK8BlockPosPK5BlockiPK20BreakBlocksComponent
    void _getActorRadius(Actor const&)const; // _ZNK10PathFinder15_getActorRadiusERK5Actor
//  void _getPathfindingMalus(Actor *, NodeType, BlockPos const&); //TODO: incomplete function definition // _ZN10PathFinder20_getPathfindingMalusEP5Actor8NodeTypeRK8BlockPos
//  void _canJumpIntoNodeOfType(NodeType, Actor const&)const; //TODO: incomplete function definition // _ZNK10PathFinder22_canJumpIntoNodeOfTypeE8NodeTypeRK5Actor
    void _addNeighbor(PathfinderNode *, PathfinderNode *, unsigned int, unsigned long &); // _ZN10PathFinder12_addNeighborEP14PathfinderNodeS1_jRm
    void _classifyNode(Actor *, BlockPos const&, Block const&, BlockPos const&, bool); // _ZN10PathFinder13_classifyNodeEP5ActorRK8BlockPosRK5BlockS4_b
//  void _checkBlockAndNeighborsProperty(Actor *, BlockPos const&, Block const*, BlockProperty, int, BreakBlocksComponent const*, std::function<bool (Block const&, BlockPos const&)>); //TODO: incomplete function definition // _ZN10PathFinder31_checkBlockAndNeighborsPropertyEP5ActorRK8BlockPosPK5Block13BlockPropertyiPK20BreakBlocksComponentSt8functionIFbRS6_S4_EE
    void _belowBlockExtendsIntoAboveBlock(BlockSource &, BlockPos const&)const; // _ZNK10PathFinder32_belowBlockExtendsIntoAboveBlockER11BlockSourceRK8BlockPos
    void _isBlockWater(int, int, int)const; // _ZNK10PathFinder13_isBlockWaterEiii
};
