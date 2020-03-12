#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class EnchantingInputContainerController : ContainerController {

public:
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    ~EnchantingInputContainerController();
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    bool isEnchantingInputItem(ItemDescriptor const&);
    EnchantingInputContainerController(std::shared_ptr<ContainerModel>);
};
