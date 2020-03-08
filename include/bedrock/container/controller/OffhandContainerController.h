#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../item/unmapped/ItemTransferAmount"
#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class OffhandContainerController : ContainerController {

public:
    virtual OffhandContainerController::~OffhandContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    OffhandContainerController(std::shared_ptr<ContainerModel>);
};
