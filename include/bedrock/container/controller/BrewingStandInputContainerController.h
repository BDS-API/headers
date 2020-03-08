#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class BrewingStandInputContainerController : ContainerController {

public:
    virtual BrewingStandInputContainerController::~BrewingStandInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
};
