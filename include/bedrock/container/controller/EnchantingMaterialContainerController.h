#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"
#include "../../item/unmapped/ItemDescriptor"


class EnchantingMaterialContainerController : ContainerController {

public:
    EnchantingMaterialContainerController::~EnchantingMaterialContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
    bool isEnchantMaterialItem(ItemDescriptor const&);
};
