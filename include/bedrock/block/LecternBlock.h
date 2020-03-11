#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class LecternBlock : ActorBlock {

public:
    virtual ~LecternBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isSignalSource()const;
    virtual bool canContainLiquid()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool isAuxValueRelevantForPicking()const;

    LecternBlock(std::string const&, int);
    void _dropBook(Player &, BlockPos const&)const;
    void _getBlockActor(BlockSource &, BlockPos const&)const;
    void emitRedstonePulse(BlockSource &, BlockPos const&)const;
    void _updateRedstone(BlockSource &, BlockPos const&, bool)const;
};
