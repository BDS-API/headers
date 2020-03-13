#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceFuelContainerController : ContainerController {

public:
    ~FurnaceFuelContainerController(); // _ZN30FurnaceFuelContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK30FurnaceFuelContainerController13isItemAllowedERK12ItemInstance
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK30FurnaceFuelContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK30FurnaceFuelContainerController21_getAvailableAddCountEi
    FurnaceFuelContainerController(std::shared_ptr<ContainerModel>); // _ZN30FurnaceFuelContainerControllerC2ESt10shared_ptrI14ContainerModelE
    bool isFurnaceFuelItem(ItemInstance const&); // _ZN30FurnaceFuelContainerController17isFurnaceFuelItemERK12ItemInstance
    bool isBucket(ItemDescriptor const&); // _ZN30FurnaceFuelContainerController8isBucketERK14ItemDescriptor
};
