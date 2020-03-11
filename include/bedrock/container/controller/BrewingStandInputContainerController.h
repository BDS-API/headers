#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class BrewingStandInputContainerController : ContainerController {

public:
    virtual ~BrewingStandInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
};
