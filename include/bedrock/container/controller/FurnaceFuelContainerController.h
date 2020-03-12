#pragma once

#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../../item/unmapped/ItemDescriptor.h"
#include "../model/ContainerModel.h"


class FurnaceFuelContainerController : ContainerController {

public:
    virtual void _getAvailableAddCount(int)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    ~FurnaceFuelContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    bool isBucket(ItemDescriptor const&);
    FurnaceFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isFurnaceFuelItem(ItemInstance const&);
};
