#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class BrewingStandResultContainerController : ContainerController {

public:
    ~BrewingStandResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    BrewingStandResultContainerController(std::shared_ptr<ContainerModel>);
};
