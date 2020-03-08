#pragma once

#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../actor/Player"


class ChestBlock : ActorBlock {

public:
    ChestBlock::~ChestBlock()
    virtual bool isContainerBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void init();

    ChestBlock(std::string const&, int, ChestBlock::ChestType, MaterialType);
    void updateSignalStrength(BlockSource &, BlockPos const&, int)const;
};
