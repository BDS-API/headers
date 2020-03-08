#pragma once

#include "../../item/unmapped/ItemTransferAmount"
#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class ArmorContainerController : ContainerController {

public:
    ArmorContainerController::~ArmorContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    ArmorContainerController(std::shared_ptr<ContainerModel>);
};
