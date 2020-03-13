#pragma once

#include <memory>
#include "ContainerController.h"


class ShulkerBoxContainerController : ContainerController {

public:
    ~ShulkerBoxContainerController(); // _ZN29ShulkerBoxContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK29ShulkerBoxContainerController13isItemAllowedERK12ItemInstance
    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>); // _ZN29ShulkerBoxContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
