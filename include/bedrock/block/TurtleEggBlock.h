#pragma once

#include <string>
#include "BlockLegacy.h"


class TurtleEggBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    ~TurtleEggBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    void _destroyEgg(BlockSource &, BlockPos const&, Actor &, int, bool)const;
    void _decreaseEggs(BlockSource &, BlockPos const&, unsigned int, bool)const;
    void _shouldUpdateHatchLevel(BlockSource &)const;
    TurtleEggBlock(std::string const&, int);
};
