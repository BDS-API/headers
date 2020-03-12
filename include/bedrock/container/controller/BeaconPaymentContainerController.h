#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class BeaconPaymentContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~BeaconPaymentContainerController();
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    BeaconPaymentContainerController(std::shared_ptr<ContainerModel>);
};
