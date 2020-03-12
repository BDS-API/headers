#pragma once

#include <memory>
#include "ContainerController.h"


class EnchantingMaterialContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~EnchantingMaterialContainerController();
    bool isEnchantMaterialItem(ItemDescriptor const&);
    EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
};
