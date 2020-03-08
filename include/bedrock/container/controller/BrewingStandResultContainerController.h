#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class BrewingStandResultContainerController : ContainerController {

public:
    BrewingStandResultContainerController::~BrewingStandResultContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandResultContainerController(std::shared_ptr<ContainerModel>);
};
