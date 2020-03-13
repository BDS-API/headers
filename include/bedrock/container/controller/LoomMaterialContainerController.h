#pragma once

#include <memory>
#include "ContainerController.h"


class LoomMaterialContainerController : ContainerController {

public:
    ~LoomMaterialContainerController(); // _ZN31LoomMaterialContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK31LoomMaterialContainerController13isItemAllowedERK12ItemInstance
    LoomMaterialContainerController(std::shared_ptr<ContainerModel>); // _ZN31LoomMaterialContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
