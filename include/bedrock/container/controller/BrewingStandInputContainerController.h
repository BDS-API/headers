#pragma once

#include <memory>
#include "ContainerController.h"


class BrewingStandInputContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~BrewingStandInputContainerController();
    BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
};
