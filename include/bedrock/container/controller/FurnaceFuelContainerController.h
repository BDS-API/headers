#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "./ContainerController.h"


class FurnaceFuelContainerController : ContainerController {

public:
    virtual ~FurnaceFuelContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    FurnaceFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isFurnaceFuelItem(ItemInstance const&);
    bool isBucket(ItemDescriptor const&);
};
