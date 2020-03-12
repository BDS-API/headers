#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class ComposterBlock : BlockLegacy {

public:
    static long PARTICLE_OFFSET;

    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    ~ComposterBlock();
    virtual bool canContainLiquid()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void use(Player &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
//  void _notifyClientComposterUsed(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition
    void extractItem(BlockSource &, Block const&, BlockPos const&);
    void _verifyIsComposter(Block const&);
    void getComposterAt(BlockSource &, BlockPos const&);
    void addItem(ItemStack const&, BlockSource &, Block const&, BlockPos const&);
    void empty(BlockSource &, Block const&, BlockPos const&);
    void _getFillChance(ItemStack const&);
    void _getCompostableItems();
    ComposterBlock(std::string const&, int);
    void _emitBoneMeal(Level &, BlockSource &, BlockPos const&)const;
    void addItem(Container &, int, ItemStack &, BlockSource &, Block const&, BlockPos const&);
};
