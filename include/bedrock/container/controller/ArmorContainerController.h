#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"


class ArmorContainerController : ContainerController {

public:
    virtual void _getAvailableAddCount(int)const;
    ~ArmorContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    ArmorContainerController(std::shared_ptr<ContainerModel>);
};
