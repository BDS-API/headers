#pragma once

#include <string>
#include "DispenserBlockActor.h"
#include "../../util/BlockPos.h"


class DropperBlockActor : DispenserBlockActor {

public:
    ~DropperBlockActor(); // _ZN17DropperBlockActorD2Ev
    virtual void getUpdatePacket(BlockSource &); // _ZN17DropperBlockActor15getUpdatePacketER11BlockSource
    virtual std::string getName()const; // _ZNK17DropperBlockActor7getNameB5cxx11Ev
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN17DropperBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    DropperBlockActor(BlockPos); // _ZN17DropperBlockActorC2E8BlockPos
//  DropperBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition // _ZN17DropperBlockActorC2E8BlockPos14BlockActorType
    void pushOutItems(BlockSource &); // _ZN17DropperBlockActor12pushOutItemsER11BlockSource
    void getAttachedContainer(BlockSource &); // _ZN17DropperBlockActor20getAttachedContainerER11BlockSource
    void _tryPushToComposter(BlockSource &, int); // _ZN17DropperBlockActor19_tryPushToComposterER11BlockSourcei
    void _addItem(BlockSource &, Container &, ItemStack &, int); // _ZN17DropperBlockActor8_addItemER11BlockSourceR9ContainerR9ItemStacki
    void _getContainerAt(BlockSource &, Vec3 const&); // _ZN17DropperBlockActor15_getContainerAtER11BlockSourceRK4Vec3
    void _isFullContainer(BlockSource &, Container &, int); // _ZN17DropperBlockActor16_isFullContainerER11BlockSourceR9Containeri
    void _tryMoveInItem(BlockSource &, Container &, ItemStack &, int, int); // _ZN17DropperBlockActor14_tryMoveInItemER11BlockSourceR9ContainerR9ItemStackii
    void _canPlaceItemInContainer(BlockSource &, Container &, ItemStack &, int, int); // _ZN17DropperBlockActor24_canPlaceItemInContainerER11BlockSourceR9ContainerR9ItemStackii
};
