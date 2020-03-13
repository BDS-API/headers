#pragma once

#include <memory>
#include "ContainerController.h"
#include "../../item/unmapped/ItemTransferAmount.h"


class OffhandContainerController : ContainerController {

public:
    ~OffhandContainerController(); // _ZN26OffhandContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK26OffhandContainerController13isItemAllowedERK12ItemInstance
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK26OffhandContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableAddCount(int)const; // _ZNK26OffhandContainerController21_getAvailableAddCountEi
    OffhandContainerController(std::shared_ptr<ContainerModel>); // _ZN26OffhandContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
