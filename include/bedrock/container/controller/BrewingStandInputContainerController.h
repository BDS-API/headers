#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class BrewingStandInputContainerController : ContainerController {

public:
    ~BrewingStandInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
};
