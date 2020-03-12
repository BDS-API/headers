#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"


class OffhandContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    ~OffhandContainerController();
    virtual void _getAvailableAddCount(int)const;
    OffhandContainerController(std::shared_ptr<ContainerModel>);
};
