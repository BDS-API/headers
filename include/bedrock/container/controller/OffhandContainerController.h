#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class OffhandContainerController : ContainerController {

public:
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    ~OffhandContainerController();
    virtual void _getAvailableAddCount(int)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    OffhandContainerController(std::shared_ptr<ContainerModel>);
};
