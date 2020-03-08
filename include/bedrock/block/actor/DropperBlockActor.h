#pragma once

#include "../../../unmapped/BlockPos"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class DropperBlockActor : DispenserBlockActor {

public:
    virtual DropperBlockActor::~DropperBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void getName[abi:cxx11](void)const;
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
