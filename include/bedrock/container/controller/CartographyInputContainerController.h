#pragma once

#include <memory>
#include "ContainerController.h"


class CartographyInputContainerController : ContainerController {

public:
    ~CartographyInputContainerController(); // _ZN35CartographyInputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK35CartographyInputContainerController13isItemAllowedERK12ItemInstance
    CartographyInputContainerController(std::shared_ptr<ContainerModel>); // _ZN35CartographyInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
