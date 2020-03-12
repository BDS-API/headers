#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceFuelContainerController : ContainerController {

public:
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    ~FurnaceFuelContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableAddCount(int)const;
    bool isBucket(ItemDescriptor const&);
    FurnaceFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isFurnaceFuelItem(ItemInstance const&);
};
