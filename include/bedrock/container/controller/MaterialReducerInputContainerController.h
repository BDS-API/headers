#pragma once

#include <memory>
#include "ContainerController.h"
#include "../../item/unmapped/ItemTransferAmount.h"


class MaterialReducerInputContainerController : ContainerController {

public:
    ~MaterialReducerInputContainerController(); // _ZN39MaterialReducerInputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK39MaterialReducerInputContainerController13isItemAllowedERK12ItemInstance
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK39MaterialReducerInputContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK39MaterialReducerInputContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK39MaterialReducerInputContainerController21_getAvailableAddCountEi
    MaterialReducerInputContainerController(std::shared_ptr<ContainerModel>); // _ZN39MaterialReducerInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
    void setEnabled(bool); // _ZN39MaterialReducerInputContainerController10setEnabledEb
};
