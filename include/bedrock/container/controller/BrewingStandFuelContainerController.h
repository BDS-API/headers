#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "./ContainerController.h"


class BrewingStandFuelContainerController : ContainerController {

public:
    virtual ~BrewingStandFuelContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isBrewingStandFuelItem(ItemDescriptor const&);
};
