#pragma once

#include "../../item/ItemInstance.h"
#include "ContainerController.h"
#include <memory>
#include "../../item/unmapped/ItemDescriptor.h"
#include "../model/ContainerModel.h"


class EnchantingMaterialContainerController : ContainerController {

public:
    ~EnchantingMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    bool isEnchantMaterialItem(ItemDescriptor const&);
    EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
};
