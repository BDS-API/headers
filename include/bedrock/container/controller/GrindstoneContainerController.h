#pragma once

#include <memory>
#include "ContainerController.h"


class GrindstoneContainerController : public ContainerController {

public:
    virtual ~GrindstoneContainerController(); // _ZN29GrindstoneContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK29GrindstoneContainerController13isItemAllowedERK12ItemInstance
    GrindstoneContainerController(std::shared_ptr<ContainerModel>); // _ZN29GrindstoneContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
