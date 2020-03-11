#pragma once

#include "../../container/Container.h"
#include "../../nbt/CompoundTag.h"
#include "../../util/Vec3.h"
#include "./DispenserBlockActor.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include <string>


class DropperBlockActor : DispenserBlockActor {

public:
    virtual ~DropperBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    DropperBlockActor(BlockPos);
//  DropperBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    void pushOutItems(BlockSource &);
    void getAttachedContainer(BlockSource &);
    void _tryPushToComposter(BlockSource &, int);
    void _addItem(BlockSource &, Container &, ItemStack &, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    void _isFullContainer(BlockSource &, Container &, int);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
};
