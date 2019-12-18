#pragma once

class DropperBlockActor : DispenserBlockActor {

public:
    virtual ~DropperBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getName[abi:cxx11](void)const;

    void DropperBlockActor(BlockPos);
    void DropperBlockActor(BlockPos, BlockActorType);
    void pushOutItems(BlockSource &);
    void getAttachedContainer(BlockSource &);
    void _tryPushToComposter(BlockSource &, int);
    void _addItem(BlockSource &, Container &, ItemStack &, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    void _isFullContainer(BlockSource &, Container &, int);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
};
