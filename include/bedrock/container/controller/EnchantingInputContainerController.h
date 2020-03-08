#pragma once

#include "../../item/unmapped/ItemTransferAmount"
#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../../unmapped/Recipes"
#include "../../item/ItemInstance"
#include "../../item/unmapped/ItemDescriptor"


class EnchantingInputContainerController : ContainerController {

public:
    EnchantingInputContainerController::~EnchantingInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    EnchantingInputContainerController(std::shared_ptr<ContainerModel>);
    bool isEnchantingInputItem(ItemDescriptor const&);
};
