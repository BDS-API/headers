#pragma once

class LoomDyeContainerController : ContainerController {

public:
    virtual LoomDyeContainerController::~LoomDyeContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomDyeContainerController(std::shared_ptr<ContainerModel>);
};
