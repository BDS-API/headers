#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class TurtleEggBlock : BlockLegacy {

public:
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool canContainLiquid()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~TurtleEggBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    void _decreaseEggs(BlockSource &, BlockPos const&, unsigned int, bool)const;
    TurtleEggBlock(std::string const&, int);
    void _destroyEgg(BlockSource &, BlockPos const&, Actor &, int, bool)const;
    void _shouldUpdateHatchLevel(BlockSource &)const;
};
