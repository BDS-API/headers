#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../../item/unmapped/ItemDescriptor.h"
#include "../model/ContainerModel.h"
#include "../../../unmapped/Recipes.h"


class EnchantingInputContainerController : ContainerController {

public:
    ~EnchantingInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableAddCount(int)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    bool isEnchantingInputItem(ItemDescriptor const&);
    EnchantingInputContainerController(std::shared_ptr<ContainerModel>);
};
