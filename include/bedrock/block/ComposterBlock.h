#pragma once

#include "../item/ItemStack"
#include "unmapped/BlockSource"
#include "../container/Container"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../../unmapped/Block"
#include "../actor/Actor"
#include "../util/Random"
#include "../util/AABB"
#include "../level/Level"


class ComposterBlock : BlockLegacy {

public:
    static long PARTICLE_OFFSET;

    ComposterBlock::~ComposterBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;

    ComposterBlock(std::string const&, int);
    void _emitBoneMeal(Level &, BlockSource &, BlockPos const&)const;
    void empty(BlockSource &, Block const&, BlockPos const&);
    void _notifyClientComposterUsed(Player const&, short, MinecraftEventing::POIBlockInteractionType)const;
    void addItem(ItemStack const&, BlockSource &, Block const&, BlockPos const&);
    void _verifyIsComposter(Block const&);
    void getComposterAt(BlockSource &, BlockPos const&);
    void _getFillChance(ItemStack const&);
    void _getCompostableItems();
    void extractItem(BlockSource &, Block const&, BlockPos const&);
    void addItem(Container &, int, ItemStack &, BlockSource &, Block const&, BlockPos const&);
};
