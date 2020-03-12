#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <vector>
#include <memory>
#include "../model/ContainerModel.h"


class HorseEquipContainerController : ContainerController {

public:
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    ~HorseEquipContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    HorseEquipContainerController(std::shared_ptr<ContainerModel>);
    void setAllowedArmorItems(std::vector<ItemInstance> const&);
    void setAllowedSaddleItems(std::vector<ItemInstance> const&);
};
