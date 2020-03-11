#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class BrewingStandResultContainerController : ContainerController {

public:
    virtual ~BrewingStandResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandResultContainerController(std::shared_ptr<ContainerModel>);
};
