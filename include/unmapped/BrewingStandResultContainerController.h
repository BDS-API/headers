#pragma once

class BrewingStandResultContainerController : ContainerController {

public:
    virtual BrewingStandResultContainerController::~BrewingStandResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    BrewingStandResultContainerController(std::shared_ptr<ContainerModel>);
};
