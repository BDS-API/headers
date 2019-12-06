#pragma once

class BrewingStandInputContainerController : ContainerController {

public:
    virtual ~BrewingStandInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
};
