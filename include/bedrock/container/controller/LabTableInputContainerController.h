#pragma once

#include <memory>
#include "ContainerController.h"


class LabTableInputContainerController : public ContainerController {

public:
    virtual ~LabTableInputContainerController(); // _ZN32LabTableInputContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK32LabTableInputContainerController13isItemAllowedERK12ItemInstance
    LabTableInputContainerController(std::shared_ptr<ContainerModel>); // _ZN32LabTableInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
