#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "../level/Level.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../item/ItemStack.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../actor/Player.h"
#include <vector>
#include "BlockLegacy.h"
#include "../util/Random.h"


class ComposterBlock : BlockLegacy {

public:
    static long PARTICLE_OFFSET;

    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    ~ComposterBlock();
    virtual bool canContainLiquid()const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _verifyIsComposter(Block const&);
    void extractItem(BlockSource &, Block const&, BlockPos const&);
    void addItem(Container &, int, ItemStack &, BlockSource &, Block const&, BlockPos const&);
//  void _notifyClientComposterUsed(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition
    ComposterBlock(std::string const&, int);
    void _getFillChance(ItemStack const&);
    void _emitBoneMeal(Level &, BlockSource &, BlockPos const&)const;
    void empty(BlockSource &, Block const&, BlockPos const&);
    void _getCompostableItems();
    void addItem(ItemStack const&, BlockSource &, Block const&, BlockPos const&);
    void getComposterAt(BlockSource &, BlockPos const&);
};
