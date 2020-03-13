#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceResultContainerController : ContainerController {

public:
    ~FurnaceResultContainerController(); // _ZN32FurnaceResultContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK32FurnaceResultContainerController13isItemAllowedERK12ItemInstance
    FurnaceResultContainerController(std::shared_ptr<ContainerModel>); // _ZN32FurnaceResultContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
