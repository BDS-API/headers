#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"


class ChestBlock : ActorBlock {

public:
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    ~ChestBlock();
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool isContainerBlock()const;
    virtual bool hasComparatorSignal()const;
    virtual bool isSignalSource()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isInteractiveBlock()const;
    virtual void init();
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
//  ChestBlock(std::string const&, int, ChestBlock::ChestType, MaterialType); //TODO: incomplete function definition
    void updateSignalStrength(BlockSource &, BlockPos const&, int)const;
};
