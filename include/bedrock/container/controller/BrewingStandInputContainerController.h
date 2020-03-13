#pragma once

#include <memory>
#include "ContainerController.h"


class BrewingStandInputContainerController : ContainerController {

public:
    ~BrewingStandInputContainerController(); // _ZN36BrewingStandInputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK36BrewingStandInputContainerController13isItemAllowedERK12ItemInstance
    BrewingStandInputContainerController(std::shared_ptr<ContainerModel>); // _ZN36BrewingStandInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
