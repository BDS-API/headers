#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class OffhandContainerController : public ContainerController {

public:
    virtual ~OffhandContainerController(); // _ZN26OffhandContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK26OffhandContainerController13isItemAllowedERK12ItemInstance
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK26OffhandContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableAddCount(int)const; // _ZNK26OffhandContainerController21_getAvailableAddCountEi
    OffhandContainerController(std::shared_ptr<ContainerModel>); // _ZN26OffhandContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
