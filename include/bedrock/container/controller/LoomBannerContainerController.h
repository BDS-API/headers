#pragma once

#include <memory>
#include "ContainerController.h"


class LoomBannerContainerController : ContainerController {

public:
    ~LoomBannerContainerController(); // _ZN29LoomBannerContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK29LoomBannerContainerController13isItemAllowedERK12ItemInstance
    LoomBannerContainerController(std::shared_ptr<ContainerModel>); // _ZN29LoomBannerContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
