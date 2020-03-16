#pragma once

#include <memory>
#include "ContainerController.h"


class LoomBannerContainerController : public ContainerController {

public:
    virtual ~LoomBannerContainerController(); // _ZN29LoomBannerContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK29LoomBannerContainerController13isItemAllowedERK12ItemInstance
    LoomBannerContainerController(std::shared_ptr<ContainerModel>); // _ZN29LoomBannerContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
