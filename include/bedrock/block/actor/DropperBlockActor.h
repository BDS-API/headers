#pragma once

#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../util/Vec3.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "DispenserBlockActor.h"
#include "../../util/BlockPos.h"


class DropperBlockActor : DispenserBlockActor {

public:
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual std::string getName()const;
    ~DropperBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    void _tryPushToComposter(BlockSource &, int);
    void pushOutItems(BlockSource &);
//  DropperBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int);
    void _isFullContainer(BlockSource &, Container &, int);
    void _addItem(BlockSource &, Container &, ItemStack &, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    DropperBlockActor(BlockPos);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
    void getAttachedContainer(BlockSource &);
};
