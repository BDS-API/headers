#pragma once

#include "../../item/ItemInstance.h"
#include "ContainerController.h"
#include <memory>
#include "../../item/unmapped/ItemDescriptor.h"
#include "../model/ContainerModel.h"


class BrewingStandFuelContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~BrewingStandFuelContainerController();
    bool isBrewingStandFuelItem(ItemDescriptor const&);
    BrewingStandFuelContainerController(std::shared_ptr<ContainerModel>);
};
