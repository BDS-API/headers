#pragma once

#include <memory>
#include "ContainerController.h"


class CompoundCreatorInputContainerController : ContainerController {

public:
    ~CompoundCreatorInputContainerController(); // _ZN39CompoundCreatorInputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK39CompoundCreatorInputContainerController13isItemAllowedERK12ItemInstance
    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>); // _ZN39CompoundCreatorInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
