#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class BeaconPaymentContainerController : public ContainerController {

public:
    virtual ~BeaconPaymentContainerController(); // _ZN32BeaconPaymentContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK32BeaconPaymentContainerController13isItemAllowedERK12ItemInstance
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const; // _ZNK32BeaconPaymentContainerController14isItemFilteredERK7RecipesRK18ContainerItemStack
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK32BeaconPaymentContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK32BeaconPaymentContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK32BeaconPaymentContainerController21_getAvailableAddCountEi
    BeaconPaymentContainerController(std::shared_ptr<ContainerModel>); // _ZN32BeaconPaymentContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
