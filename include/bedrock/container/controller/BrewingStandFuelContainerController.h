#pragma once

#include <memory>
#include "ContainerController.h"


class BrewingStandFuelContainerController : ContainerController {

public:
    ~BrewingStandFuelContainerController(); // _ZN35BrewingStandFuelContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK35BrewingStandFuelContainerController13isItemAllowedERK12ItemInstance
    BrewingStandFuelContainerController(std::shared_ptr<ContainerModel>); // _ZN35BrewingStandFuelContainerControllerC2ESt10shared_ptrI14ContainerModelE
    bool isBrewingStandFuelItem(ItemDescriptor const&); // _ZN35BrewingStandFuelContainerController22isBrewingStandFuelItemERK14ItemDescriptor
};
