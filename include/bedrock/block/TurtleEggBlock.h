#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"


class TurtleEggBlock : BlockLegacy {

public:
    virtual TurtleEggBlock::~TurtleEggBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canBeSilkTouched()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    TurtleEggBlock(std::string const&, int);
    void _destroyEgg(BlockSource &, BlockPos const&, Actor &, int, bool)const;
    void _shouldUpdateHatchLevel(BlockSource &)const;
    void _decreaseEggs(BlockSource &, BlockPos const&, unsigned int, bool)const;
};
