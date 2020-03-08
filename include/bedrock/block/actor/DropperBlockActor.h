#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../util/BlockPos"
#include "../../util/Vec3"
#include "../../item/ItemStack"
#include "../../container/Container"


class DropperBlockActor : DispenserBlockActor {

public:
    virtual DropperBlockActor::~DropperBlockActor()
    virtual void getUpdatePacket(BlockSource &);
    virtual void getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    DropperBlockActor(BlockPos);
    DropperBlockActor(BlockPos, BlockActorType);
    void pushOutItems(BlockSource &);
    void getAttachedContainer(BlockSource &);
    void _tryPushToComposter(BlockSource &, int);
    void _addItem(BlockSource &, Container &, ItemStack &, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    void _isFullContainer(BlockSource &, Container &, int);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
};
