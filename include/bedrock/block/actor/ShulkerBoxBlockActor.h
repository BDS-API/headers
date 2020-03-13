#pragma once

#include <string>
#include "ChestBlockActor.h"
#include <vector>


class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    ~ShulkerBoxBlockActor(); // _ZN20ShulkerBoxBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN20ShulkerBoxBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK20ShulkerBoxBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN20ShulkerBoxBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN20ShulkerBoxBlockActor15getUpdatePacketER11BlockSource
    virtual void onPlace(BlockSource &); // _ZN20ShulkerBoxBlockActor7onPlaceER11BlockSource
    virtual std::string getName()const; // _ZNK20ShulkerBoxBlockActor7getNameB5cxx11Ev
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN20ShulkerBoxBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void getMaxStackSize()const; // _ZNK20ShulkerBoxBlockActor15getMaxStackSizeEv
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK20ShulkerBoxBlockActor13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual void playOpenSound(BlockSource &); // _ZN20ShulkerBoxBlockActor13playOpenSoundER11BlockSource
    virtual void playCloseSound(BlockSource &); // _ZN20ShulkerBoxBlockActor14playCloseSoundER11BlockSource
    virtual void getObstructionAABB()const; // _ZNK20ShulkerBoxBlockActor18getObstructionAABBEv
    virtual void _detectEntityObstruction(BlockSource &)const; // _ZNK20ShulkerBoxBlockActor24_detectEntityObstructionER11BlockSource
//  ShulkerBoxBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition // _ZN20ShulkerBoxBlockActorC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE20BlockActorRendererIdRK8BlockPos
    void createShulkerBoxBlockEntity(BlockPos const&); // _ZN20ShulkerBoxBlockActor27createShulkerBoxBlockEntityERK8BlockPos
    void getFacingDir(); // _ZN20ShulkerBoxBlockActor12getFacingDirEv
    void setFacingDir(unsigned char); // _ZN20ShulkerBoxBlockActor12setFacingDirEh
    void _calculateBB(); // _ZN20ShulkerBoxBlockActor12_calculateBBEv
    void _moveCollidedEntities(BlockSource &)const; // _ZNK20ShulkerBoxBlockActor21_moveCollidedEntitiesER11BlockSource
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const; // _ZNK20ShulkerBoxBlockActor32_calculateMovementWithCollisionsER11BlockSourceP5Actor
    void _calculateActorMovementIntoShulker(std::vector<AABB> const&, AABB const&)const; // _ZNK20ShulkerBoxBlockActor34_calculateActorMovementIntoShulkerERKSt6vectorI4AABBSaIS1_EERKS1_
};
