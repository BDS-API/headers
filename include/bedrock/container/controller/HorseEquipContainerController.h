#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include <vector>
#include "./ContainerController.h"


class HorseEquipContainerController : ContainerController {

public:
    virtual ~HorseEquipContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    HorseEquipContainerController(std::shared_ptr<ContainerModel>);
    void setAllowedArmorItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
    void setAllowedSaddleItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
};
