#pragma once

#include "../../item/unmapped/ItemTransferAmount"
#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class HorseEquipContainerController : ContainerController {

public:
    HorseEquipContainerController::~HorseEquipContainerController()
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    HorseEquipContainerController(std::shared_ptr<ContainerModel>);
    void setAllowedArmorItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
    void setAllowedSaddleItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
};
