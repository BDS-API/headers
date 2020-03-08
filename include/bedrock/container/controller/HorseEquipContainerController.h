#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../item/unmapped/ItemTransferAmount"
#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class HorseEquipContainerController : ContainerController {

public:
    virtual HorseEquipContainerController::~HorseEquipContainerController()
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    HorseEquipContainerController(std::shared_ptr<ContainerModel>);
    void setAllowedArmorItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
    void setAllowedSaddleItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
};
