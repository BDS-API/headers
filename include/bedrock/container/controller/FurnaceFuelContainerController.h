#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"
#include "../../item/unmapped/ItemDescriptor"


class FurnaceFuelContainerController : ContainerController {

public:
    FurnaceFuelContainerController::~FurnaceFuelContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    FurnaceFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isFurnaceFuelItem(ItemInstance const&);
    bool isBucket(ItemDescriptor const&);
};
