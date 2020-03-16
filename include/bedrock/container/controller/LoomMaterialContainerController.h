#pragma once

#include <memory>
#include "ContainerController.h"


class LoomMaterialContainerController : public ContainerController {

public:
    virtual ~LoomMaterialContainerController(); // _ZN31LoomMaterialContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK31LoomMaterialContainerController13isItemAllowedERK12ItemInstance
    LoomMaterialContainerController(std::shared_ptr<ContainerModel>); // _ZN31LoomMaterialContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
