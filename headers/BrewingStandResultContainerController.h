#pragma once

class BrewingStandResultContainerController : ContainerController {

public:
    virtual ~BrewingStandResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void BrewingStandResultContainerController(std::shared_ptr<ContainerModel>);
};
