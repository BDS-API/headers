#pragma once

class LoomMaterialContainerController : ContainerController {

public:
    virtual LoomMaterialContainerController::~LoomMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
