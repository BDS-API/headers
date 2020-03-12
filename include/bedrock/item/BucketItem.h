#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include "../util/BlockPos.h"


class BucketItem : Item {

public:
    static long DRINK_DURATION;
    static long mFillTypeToEntityType;

    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual std::string getAuxValuesDescription()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
    virtual bool isEmissive(int)const;
    virtual void uniqueAuxValues()const;
    virtual bool isDestructive(int)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    ~BucketItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void setIcon(std::string const&, int);
    virtual bool isValidAuxValue(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    void _takeLiquid(ItemStack &, Actor &, BlockPos const&)const;
    void getFishData(Actor const&);
    void addBucketEntitySaveData(Actor &, ItemStack &)const;
//  void _supportsEntityType(ActorType const&, int &)const; //TODO: incomplete function definition
    void _getBucketFillType(Block const&)const;
    void validFishInteraction(int)const;
    BucketItem(std::string const&, int);
//  void _tryGetBlock(BucketFillType)const; //TODO: incomplete function definition
    void getEntityIdFromBucket(ItemInstance const&)const;
//  bool isBlockFillType(BucketFillType)const; //TODO: incomplete function definition
//  bool isFishFillType(BucketFillType)const; //TODO: incomplete function definition
    void readBucketEntitySaveData(BlockSource &, Actor *, unsigned char, BlockPos, ItemInstance const&)const;
    void _canEmptyBucketIntoBlock(Block const&, Block const&)const;
    void _emptyBucket(BlockSource &, Block const&, BlockPos const&, Actor *, ItemStack const&, unsigned char)const;
};
