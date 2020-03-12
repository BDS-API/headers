#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include <vector>
#include "ContainerController.h"


class HorseEquipContainerController : ContainerController {

public:
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    ~HorseEquipContainerController();
    void setAllowedSaddleItems(std::vector<ItemInstance> const&);
    void setAllowedArmorItems(std::vector<ItemInstance> const&);
    HorseEquipContainerController(std::shared_ptr<ContainerModel>);
};
