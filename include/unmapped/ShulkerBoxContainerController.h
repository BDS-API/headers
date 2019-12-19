#pragma once

class ShulkerBoxContainerController : ContainerController {

public:
    virtual ShulkerBoxContainerController::~ShulkerBoxContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
