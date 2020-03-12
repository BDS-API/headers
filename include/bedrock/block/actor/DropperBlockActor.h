#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "DispenserBlockActor.h"


class DropperBlockActor : DispenserBlockActor {

public:
    virtual std::string getName()const;
    ~DropperBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int);
    void _addItem(BlockSource &, Container &, ItemStack &, int);
    void getAttachedContainer(BlockSource &);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    DropperBlockActor(BlockPos);
    void _isFullContainer(BlockSource &, Container &, int);
//  DropperBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    void pushOutItems(BlockSource &);
    void _tryPushToComposter(BlockSource &, int);
};
