#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../../unmapped/Recipes.h"


class BeaconPaymentContainerController : ContainerController {

public:
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    ~BeaconPaymentContainerController();
    virtual void _getAvailableAddCount(int)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    BeaconPaymentContainerController(std::shared_ptr<ContainerModel>);
};
