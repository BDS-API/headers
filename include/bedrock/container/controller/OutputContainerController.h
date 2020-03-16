#pragma once

#include <memory>
#include "ContainerController.h"


class OutputContainerController : public ContainerController {

public:
    virtual ~OutputContainerController(); // _ZN25OutputContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK25OutputContainerController13isItemAllowedERK12ItemInstance
    OutputContainerController(std::shared_ptr<ContainerModel>, bool); // _ZN25OutputContainerControllerC2ESt10shared_ptrI14ContainerModelEb
};
