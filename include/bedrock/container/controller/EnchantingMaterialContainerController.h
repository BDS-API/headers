#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "./ContainerController.h"


class EnchantingMaterialContainerController : ContainerController {

public:
    virtual ~EnchantingMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
    bool isEnchantMaterialItem(ItemDescriptor const&);
};
