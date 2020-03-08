#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class BrewingStandInputContainerController : ContainerController {

public:
    BrewingStandInputContainerController::~BrewingStandInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
};
