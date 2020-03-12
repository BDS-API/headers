#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class ArmorContainerController : ContainerController {

public:
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~ArmorContainerController();
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    ArmorContainerController(std::shared_ptr<ContainerModel>);
};
