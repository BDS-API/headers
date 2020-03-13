#pragma once

#include <memory>
#include "ContainerController.h"
#include "../../item/unmapped/ItemTransferAmount.h"


class EnchantingInputContainerController : ContainerController {

public:
    ~EnchantingInputContainerController(); // _ZN34EnchantingInputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK34EnchantingInputContainerController13isItemAllowedERK12ItemInstance
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const; // _ZNK34EnchantingInputContainerController14isItemFilteredERK7RecipesRK18ContainerItemStack
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK34EnchantingInputContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK34EnchantingInputContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK34EnchantingInputContainerController21_getAvailableAddCountEi
    EnchantingInputContainerController(std::shared_ptr<ContainerModel>); // _ZN34EnchantingInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
    bool isEnchantingInputItem(ItemDescriptor const&); // _ZN34EnchantingInputContainerController21isEnchantingInputItemERK14ItemDescriptor
};
