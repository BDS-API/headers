#pragma once

#include <string>
#include "ActorBlock.h"


class LecternBlock : ActorBlock {

public:
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    ~LecternBlock();
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool hasComparatorSignal()const;
    virtual bool canContainLiquid()const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool isSignalSource()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    void _updateRedstone(BlockSource &, BlockPos const&, bool)const;
    void emitRedstonePulse(BlockSource &, BlockPos const&)const;
    void _dropBook(Player &, BlockPos const&)const;
    LecternBlock(std::string const&, int);
    void _getBlockActor(BlockSource &, BlockPos const&)const;
};
