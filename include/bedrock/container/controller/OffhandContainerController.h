#pragma once

#include "../../item/unmapped/ItemTransferAmount"
#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class OffhandContainerController : ContainerController {

public:
    OffhandContainerController::~OffhandContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    OffhandContainerController(std::shared_ptr<ContainerModel>);
};
