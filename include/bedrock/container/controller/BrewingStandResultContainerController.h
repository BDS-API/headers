#pragma once

#include <memory>
#include "ContainerController.h"


class BrewingStandResultContainerController : ContainerController {

public:
    ~BrewingStandResultContainerController(); // _ZN37BrewingStandResultContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK37BrewingStandResultContainerController13isItemAllowedERK12ItemInstance
    BrewingStandResultContainerController(std::shared_ptr<ContainerModel>); // _ZN37BrewingStandResultContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
