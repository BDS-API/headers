#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class LecternBlock : ActorBlock {

public:
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool isSignalSource()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void attack(Player *, BlockPos const&)const;
    ~LecternBlock();
    virtual bool hasComparatorSignal()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    void _updateRedstone(BlockSource &, BlockPos const&, bool)const;
    void emitRedstonePulse(BlockSource &, BlockPos const&)const;
    void _getBlockActor(BlockSource &, BlockPos const&)const;
    void _dropBook(Player &, BlockPos const&)const;
    LecternBlock(std::string const&, int);
};
