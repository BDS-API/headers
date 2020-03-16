#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceResultContainerController : public ContainerController {

public:
    virtual ~FurnaceResultContainerController(); // _ZN32FurnaceResultContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK32FurnaceResultContainerController13isItemAllowedERK12ItemInstance
    FurnaceResultContainerController(std::shared_ptr<ContainerModel>); // _ZN32FurnaceResultContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
