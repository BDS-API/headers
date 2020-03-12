#pragma once

#include "../bedrock/util/BlockPos.h"


class Hopper {

public:
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int);
    Hopper(int, bool);
    void _getAttachedContainer(BlockSource &, Vec3 const&, int);
    void _getContainerAt(BlockSource &, Vec3 const&);
    void _getItemAt(BlockSource &, Vec3 const&);
    void _addItem(Container &, ItemActor &);
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int, int);
    void _pullInItems(BlockSource &, Container &, Vec3 const&);
    void setMoveItemSpeed(int);
    void _getSourceContainer(BlockSource &, Vec3 const&);
    bool isOnCooldown();
    void _tryPushToComposter(BlockSource &, Container &, BlockPos, int);
    void setCooldownTime(int);
    void _addItem(BlockSource &, Container &, ItemStack &, int, int);
    void _tryTakeInItemFromSlot(BlockSource &, Container &, Container &, int, int);
    void _canTakeItemFromContainer(BlockSource &, Container &, ItemStack &, int, int);
    void _tryMoveItems(BlockSource &, Container &, Vec3 const&, int, bool);
    void getCooldownTime()const;
    void _isEmptyContainer(Container &, int);
    void _pushOutItems(BlockSource &, Container &, Vec3 const&, int);
    void _isFullContainer(BlockSource &, Container &, int);
};
