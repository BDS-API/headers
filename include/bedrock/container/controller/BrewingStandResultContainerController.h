#pragma once

#include <memory>
#include "ContainerController.h"


class BrewingStandResultContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~BrewingStandResultContainerController();
    BrewingStandResultContainerController(std::shared_ptr<ContainerModel>);
};
