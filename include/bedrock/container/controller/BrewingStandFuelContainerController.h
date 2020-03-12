#pragma once

#include <memory>
#include "ContainerController.h"


class BrewingStandFuelContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~BrewingStandFuelContainerController();
    BrewingStandFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isBrewingStandFuelItem(ItemDescriptor const&);
};
