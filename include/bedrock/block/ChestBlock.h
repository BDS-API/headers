#pragma once

#include <string>
#include "ActorBlock.h"


class ChestBlock : ActorBlock {

public:
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool isInteractiveBlock()const;
    ~ChestBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual bool isSignalSource()const;
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void init();
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool isContainerBlock()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    void updateSignalStrength(BlockSource &, BlockPos const&, int)const;
//  ChestBlock(std::string const&, int, ChestBlock::ChestType, MaterialType); //TODO: incomplete function definition
};
