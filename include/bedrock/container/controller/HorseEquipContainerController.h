#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"
#include <vector>


class HorseEquipContainerController : public ContainerController {

public:
    virtual ~HorseEquipContainerController(); // _ZN29HorseEquipContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK29HorseEquipContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK29HorseEquipContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK29HorseEquipContainerController21_getAvailableAddCountEi
    HorseEquipContainerController(std::shared_ptr<ContainerModel>); // _ZN29HorseEquipContainerControllerC2ESt10shared_ptrI14ContainerModelE
    void setAllowedArmorItems(std::vector<ItemInstance> const&); // _ZN29HorseEquipContainerController20setAllowedArmorItemsERKSt6vectorI12ItemInstanceSaIS1_EE
    void setAllowedSaddleItems(std::vector<ItemInstance> const&); // _ZN29HorseEquipContainerController21setAllowedSaddleItemsERKSt6vectorI12ItemInstanceSaIS1_EE
};
