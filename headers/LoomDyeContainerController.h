#pragma once

class LoomDyeContainerController : ContainerController {

public:
    virtual ~LoomDyeContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void LoomDyeContainerController(std::shared_ptr<ContainerModel>);
};
