#pragma once

#include <memory>
#include "ContainerController.h"


class ShulkerBoxContainerController : public ContainerController {

public:
    virtual ~ShulkerBoxContainerController(); // _ZN29ShulkerBoxContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK29ShulkerBoxContainerController13isItemAllowedERK12ItemInstance
    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>); // _ZN29ShulkerBoxContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
