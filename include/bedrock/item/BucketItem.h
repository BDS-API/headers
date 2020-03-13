#pragma once

#include <string>
#include <memory>
#include "../util/BlockPos.h"
#include "Item.h"


class BucketItem : Item {

public:
    static long DRINK_DURATION;
    static long mFillTypeToEntityType;

    ~BucketItem(); // _ZN10BucketItemD2Ev
    virtual bool isDestructive(int)const; // _ZNK10BucketItem13isDestructiveEi
    virtual bool isLiquidClipItem(int)const; // _ZNK10BucketItem16isLiquidClipItemEi
    virtual bool isValidAuxValue(int)const; // _ZNK10BucketItem15isValidAuxValueEi
    virtual void uniqueAuxValues()const; // _ZNK10BucketItem15uniqueAuxValuesEv
    virtual void use(ItemStack &, Player &)const; // _ZNK10BucketItem3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK10BucketItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK10BucketItem15useTimeDepletedER9ItemStackP5LevelP6Player
    virtual void releaseUsing(ItemStack &, Player *, int)const; // _ZNK10BucketItem12releaseUsingER9ItemStackP6Playeri
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK10BucketItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getMaxStackSize(ItemDescriptor const&)const; // _ZNK10BucketItem15getMaxStackSizeERK14ItemDescriptor
    virtual bool isEmissive(int)const; // _ZNK10BucketItem10isEmissiveEi
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK10BucketItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN10BucketItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual std::string getAuxValuesDescription()const; // _ZNK10BucketItem23getAuxValuesDescriptionB5cxx11Ev
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK10BucketItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BucketItem(std::string const&, int); // _ZN10BucketItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void addBucketEntitySaveData(Actor &, ItemStack &)const; // _ZNK10BucketItem23addBucketEntitySaveDataER5ActorR9ItemStack
    void getFishData(Actor const&); // _ZN10BucketItem11getFishDataERK5Actor
    void getEntityIdFromBucket(ItemInstance const&)const; // _ZNK10BucketItem21getEntityIdFromBucketERK12ItemInstance
//  bool isBlockFillType(BucketFillType)const; //TODO: incomplete function definition // _ZNK10BucketItem15isBlockFillTypeE14BucketFillType
//  bool isFishFillType(BucketFillType)const; //TODO: incomplete function definition // _ZNK10BucketItem14isFishFillTypeE14BucketFillType
    void readBucketEntitySaveData(BlockSource &, Actor *, unsigned char, BlockPos, ItemInstance const&)const; // _ZNK10BucketItem24readBucketEntitySaveDataER11BlockSourceP5Actorh8BlockPosRK12ItemInstance
//  void _supportsEntityType(ActorType const&, int &)const; //TODO: incomplete function definition // _ZNK10BucketItem19_supportsEntityTypeERK9ActorTypeRi
    void _takeLiquid(ItemStack &, Actor &, BlockPos const&)const; // _ZNK10BucketItem11_takeLiquidER9ItemStackR5ActorRK8BlockPos
//  void _tryGetBlock(BucketFillType)const; //TODO: incomplete function definition // _ZNK10BucketItem12_tryGetBlockE14BucketFillType
    void _emptyBucket(BlockSource &, Block const&, BlockPos const&, Actor *, ItemStack const&, unsigned char)const; // _ZNK10BucketItem12_emptyBucketER11BlockSourceRK5BlockRK8BlockPosP5ActorRK9ItemStackh
    void _getBucketFillType(Block const&)const; // _ZNK10BucketItem18_getBucketFillTypeERK5Block
    void _canEmptyBucketIntoBlock(Block const&, Block const&)const; // _ZNK10BucketItem24_canEmptyBucketIntoBlockERK5BlockS2_
    void validFishInteraction(int)const; // _ZNK10BucketItem20validFishInteractionEi
};
