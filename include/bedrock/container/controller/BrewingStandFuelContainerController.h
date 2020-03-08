#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"
#include "../../item/unmapped/ItemDescriptor"


class BrewingStandFuelContainerController : ContainerController {

public:
    virtual BrewingStandFuelContainerController::~BrewingStandFuelContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isBrewingStandFuelItem(ItemDescriptor const&);
};
