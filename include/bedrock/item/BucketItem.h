#pragma once

#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include <memory>
#include "Item.h"
#include "../level/Level.h"
#include "../actor/Player.h"
#include "../block/unmapped/BlockSource.h"
#include "ItemStackBase.h"
#include "unmapped/ItemDescriptor.h"


class BucketItem : Item {

public:
    static long DRINK_DURATION;
    static long mFillTypeToEntityType;

    ~BucketItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isDestructive(int)const;
    virtual void setIcon(std::string const&, int);
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void uniqueAuxValues()const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isEmissive(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual std::string getAuxValuesDescription()const;
    virtual bool isLiquidClipItem(int)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
//  bool isBlockFillType(BucketFillType)const; //TODO: incomplete function definition
    void _getBucketFillType(Block const&)const;
    void getFishData(Actor const&);
    BucketItem(std::string const&, int);
//  bool isFishFillType(BucketFillType)const; //TODO: incomplete function definition
//  void _supportsEntityType(ActorType const&, int &)const; //TODO: incomplete function definition
    void _emptyBucket(BlockSource &, Block const&, BlockPos const&, Actor *, ItemStack const&, unsigned char)const;
    void _canEmptyBucketIntoBlock(Block const&, Block const&)const;
    void validFishInteraction(int)const;
//  void _tryGetBlock(BucketFillType)const; //TODO: incomplete function definition
    void readBucketEntitySaveData(BlockSource &, Actor *, unsigned char, BlockPos, ItemInstance const&)const;
    void getEntityIdFromBucket(ItemInstance const&)const;
    void addBucketEntitySaveData(Actor &, ItemStack &)const;
    void _takeLiquid(ItemStack &, Actor &, BlockPos const&)const;
};
