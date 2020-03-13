#pragma once

#include <memory>
#include "ContainerController.h"
#include "../../item/unmapped/ItemTransferAmount.h"


class ArmorContainerController : ContainerController {

public:
    ~ArmorContainerController(); // _ZN24ArmorContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK24ArmorContainerController13isItemAllowedERK12ItemInstance
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK24ArmorContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK24ArmorContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK24ArmorContainerController21_getAvailableAddCountEi
    ArmorContainerController(std::shared_ptr<ContainerModel>); // _ZN24ArmorContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
