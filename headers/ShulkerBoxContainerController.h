#pragma once

class ShulkerBoxContainerController : ContainerController {

public:
    virtual ~ShulkerBoxContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
