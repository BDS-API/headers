#pragma once

#include "../../../unmapped/Recipes.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "./ContainerController.h"


class BeaconPaymentContainerController : ContainerController {

public:
    virtual ~BeaconPaymentContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    BeaconPaymentContainerController(std::shared_ptr<ContainerModel>);
};
