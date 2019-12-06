#pragma once

class BrewingStandFuelContainerController : ContainerController {

public:
    virtual ~BrewingStandFuelContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void BrewingStandFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isBrewingStandFuelItem(ItemDescriptor const&);
};
