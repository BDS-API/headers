#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"
#include "../../item/unmapped/ItemDescriptor"


class EnchantingMaterialContainerController : ContainerController {

public:
    virtual EnchantingMaterialContainerController::~EnchantingMaterialContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
    bool isEnchantMaterialItem(ItemDescriptor const&);
};
