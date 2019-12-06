#pragma once

class CartographyInputContainerController : ContainerController {

public:
    virtual ~CartographyInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void CartographyInputContainerController(std::shared_ptr<ContainerModel>);
};
