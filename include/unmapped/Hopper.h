#pragma once

#include "../bedrock/util/BlockPos.h"


class Hopper {

public:
    Hopper(int, bool); // _ZN6HopperC2Eib
    void _addItem(Container &, ItemActor &); // _ZN6Hopper8_addItemER9ContainerR9ItemActor
    void _addItem(BlockSource &, Container &, ItemStack &, int, int); // _ZN6Hopper8_addItemER11BlockSourceR9ContainerR9ItemStackii
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int, int); // _ZN6Hopper14_tryMoveInItemER11BlockSourceR9ContainerR9ItemStackiii
    void _getItemAt(BlockSource &, Vec3 const&); // _ZN6Hopper10_getItemAtER11BlockSourceRK4Vec3
    void _tryMoveItems(BlockSource &, Container &, Vec3 const&, int, bool); // _ZN6Hopper13_tryMoveItemsER11BlockSourceR9ContainerRK4Vec3ib
    void _isEmptyContainer(Container &, int); // _ZN6Hopper17_isEmptyContainerER9Containeri
    void _pushOutItems(BlockSource &, Container &, Vec3 const&, int); // _ZN6Hopper13_pushOutItemsER11BlockSourceR9ContainerRK4Vec3i
    void _isFullContainer(BlockSource &, Container &, int); // _ZN6Hopper16_isFullContainerER11BlockSourceR9Containeri
    void _pullInItems(BlockSource &, Container &, Vec3 const&); // _ZN6Hopper12_pullInItemsER11BlockSourceR9ContainerRK4Vec3
    void setCooldownTime(int); // _ZN6Hopper15setCooldownTimeEi
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int); // _ZN6Hopper24_canPlaceItemInContainerER11BlockSourceR9ContainerR9ItemStackii
    void _tryTakeInItemFromSlot(BlockSource &, Container &, Container &, int, int); // _ZN6Hopper22_tryTakeInItemFromSlotER11BlockSourceR9ContainerS3_ii
    void _canTakeItemFromContainer(BlockSource &, Container &, ItemStack &, int, int); // _ZN6Hopper25_canTakeItemFromContainerER11BlockSourceR9ContainerR9ItemStackii
    void _getSourceContainer(BlockSource &, Vec3 const&); // _ZN6Hopper19_getSourceContainerER11BlockSourceRK4Vec3
    void _getAttachedContainer(BlockSource &, Vec3 const&, int); // _ZN6Hopper21_getAttachedContainerER11BlockSourceRK4Vec3i
    void _tryPushToComposter(BlockSource &, Container &, BlockPos, int); // _ZN6Hopper19_tryPushToComposterER11BlockSourceR9Container8BlockPosi
    void _getContainerAt(BlockSource &, Vec3 const&); // _ZN6Hopper15_getContainerAtER11BlockSourceRK4Vec3
    bool isOnCooldown(); // _ZN6Hopper12isOnCooldownEv
    void getCooldownTime()const; // _ZNK6Hopper15getCooldownTimeEv
    void setMoveItemSpeed(int); // _ZN6Hopper16setMoveItemSpeedEi
};
