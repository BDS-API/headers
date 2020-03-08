#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/ItemActor"
#include "../bedrock/util/Vec3"
#include "../bedrock/item/ItemStack"
#include "../bedrock/container/Container"


class Hopper {

public:

    Hopper(int, bool);
    void _addItem(Container &, ItemActor &);
    void _addItem(BlockSource &, Container &, ItemStack &, int, int);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int, int);
    void _getItemAt(BlockSource &, Vec3 const&);
    void _tryMoveItems(BlockSource &, Container &, Vec3 const&, int, bool);
    void _isEmptyContainer(Container &, int);
    void _pushOutItems(BlockSource &, Container &, Vec3 const&, int);
    void _isFullContainer(BlockSource &, Container &, int);
    void _pullInItems(BlockSource &, Container &, Vec3 const&);
    void setCooldownTime(int);
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
    void _tryTakeInItemFromSlot(BlockSource &, Container &, Container &, int, int);
    void _canTakeItemFromContainer(BlockSource &, Container &, ItemStack &, int, int);
    void _getSourceContainer(BlockSource &, Vec3 const&);
    void _getAttachedContainer(BlockSource &, Vec3 const&, int);
    void _tryPushToComposter(BlockSource &, Container &, BlockPos, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    bool isOnCooldown();
    void getCooldownTime()const;
    void setMoveItemSpeed(int);
};
