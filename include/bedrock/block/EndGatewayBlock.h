#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class EndGatewayBlock : ActorBlock {

public:
    ~EndGatewayBlock(); // _ZN15EndGatewayBlockD2Ev
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK15EndGatewayBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual bool isWaterBlocking()const; // _ZNK15EndGatewayBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK15EndGatewayBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK15EndGatewayBlock16canContainLiquidEv
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15EndGatewayBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15EndGatewayBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK15EndGatewayBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15EndGatewayBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    EndGatewayBlock(std::string const&, int); // _ZN15EndGatewayBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
