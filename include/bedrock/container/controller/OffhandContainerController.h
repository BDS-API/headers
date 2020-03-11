#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "./ContainerController.h"


class OffhandContainerController : ContainerController {

public:
    virtual ~OffhandContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    OffhandContainerController(std::shared_ptr<ContainerModel>);
};
