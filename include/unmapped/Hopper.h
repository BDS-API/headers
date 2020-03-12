#pragma once

#include "../bedrock/actor/ItemActor.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/container/Container.h"
#include "../bedrock/item/ItemStack.h"


class Hopper {

public:
    void setCooldownTime(int);
    void _getSourceContainer(BlockSource &, Vec3 const&);
    bool isOnCooldown();
    void _tryPushToComposter(BlockSource &, Container &, BlockPos, int);
    void _tryMoveItems(BlockSource &, Container &, Vec3 const&, int, bool);
    void _addItem(BlockSource &, Container &, ItemStack &, int, int);
    void getCooldownTime()const;
    void _canTakeItemFromContainer(BlockSource &, Container &, ItemStack &, int, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    void _getItemAt(BlockSource &, Vec3 const&);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
    void _getAttachedContainer(BlockSource &, Vec3 const&, int);
    void _addItem(Container &, ItemActor &);
    void setMoveItemSpeed(int);
    Hopper(int, bool);
    void _tryTakeInItemFromSlot(BlockSource &, Container &, Container &, int, int);
    void _pullInItems(BlockSource &, Container &, Vec3 const&);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int, int);
    void _isEmptyContainer(Container &, int);
    void _pushOutItems(BlockSource &, Container &, Vec3 const&, int);
    void _isFullContainer(BlockSource &, Container &, int);
};
