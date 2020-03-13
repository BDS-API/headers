#pragma once

#include <memory>
#include "ContainerController.h"


class LoomDyeContainerController : ContainerController {

public:
    ~LoomDyeContainerController(); // _ZN26LoomDyeContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK26LoomDyeContainerController13isItemAllowedERK12ItemInstance
    LoomDyeContainerController(std::shared_ptr<ContainerModel>); // _ZN26LoomDyeContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
