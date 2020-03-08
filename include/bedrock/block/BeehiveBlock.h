#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/Vec3"
#include "../item/ItemStack"


class BeehiveBlock : ActorBlock {

public:
    virtual BeehiveBlock::~BeehiveBlock()
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void init();
    virtual bool canBeSilkTouched()const;

    BeehiveBlock(std::string const&, int);
    void _getBeehiveBlockActor(BlockSource &, BlockPos const&)const;
    bool hasHoneyToHarvest(Block const&);
    void _carriedItemCanUse(ItemStack &)const;
    void _hasLitCampfireBelow(BlockSource const&, BlockPos)const;
    void evictAll(BlockSource &, BlockPos const&, bool)const;
    void emitHoneyComb(BlockSource &, BlockPos const&)const;
    void resetHoneyLevel(BlockSource &, Block const&, BlockPos const&);
    void _playShearSound(BlockSource &, BlockPos const&)const;
    void _fillHoneyBottle(Player &, ItemStack &, ItemStack &, BlockSource &, BlockPos const&)const;
    void deliverNectar(BlockSource &, Block const&, BlockPos const&);
    void _getSilkTouchItemInstance(Block const&, Player &, BlockPos const&)const;
    void _playBottleSound(BlockSource &, BlockPos const&)const;
    void getNumberOfOccupants(BlockSource &, BlockPos const&)const;
};
